/*-----------------------------------------------------------------------

Problem Title: Attribute Parser
Problem Link: https://www.hackerrank.com/challenges/attribute-parser
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <regex>
using namespace std;

string trim(const string& str)
{
    size_t first = str.find_first_not_of(' ');
    if (string::npos == first) {
        return str;
    }
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last - first + 1));
}

bool is_open_tag(string codeline)
{
    if (codeline[0] == '<' && codeline[1] == '/') { //closing tag
        return false;
    }
    //else opening tag
    return true;
}

string get_tagname(string codeline)
{
    //finds tags from given code line of opening or closing tags using regex
    string tagname;
    smatch m;
    string match;

    regex r1("<[a-zA-Z0-9]+");
    regex r2("</[a-zA-Z0-9]+");

    if (is_open_tag(codeline)) {
        regex_search(codeline, m, r1);
        string match = m[0].str();
        tagname = match.substr(1, match.size());
    }
    else {
        regex_search(codeline, m, r2);
        string match = m[0].str();
        tagname = match.substr(2, match.size());
    }

    return trim(tagname);
}

map<string, string> get_attrs(string codeline)
{
    //find attrs from given code line of starting tags using regex
    regex r("[^\\s]+ = \"[^\\s]+\"");
    smatch m;
    string s, key, value, delimiter = " = ";
    map<string, string> attrs;
    size_t pos;
    while (regex_search(codeline, m, r)) {
        for (auto x : m) {
            s = x.str();
            pos = s.find(delimiter);
            key = s.substr(0, pos);
            s.erase(0, pos + delimiter.length());
            value = s.substr(1, s.length() - 2);
            attrs.insert(pair<string, string>(trim(key), trim(value)));
            codeline = m.suffix().str();
        }
    }
    return attrs;
}

vector<string> parse_query(string query)
{
    //find the sequence of tags to visit based on given query string
    vector<string> q;
    regex r("[a-zA-Z0-9]+");
    string s, tags, attr, delimiter = "~";
    size_t pos;
    smatch m;

    pos = query.find(delimiter);
    tags = query.substr(0, pos);
    query.erase(0, pos);
    attr = query.substr(0, query.length());

    while (regex_search(tags, m, r)) {
        for (auto x : m) {
            s = x.str();
            q.push_back(trim(s));
        }
        tags = m.suffix().str();
    }

    q.push_back(trim(attr));

    return q;
}

class Node {
public:
    string tagname; // tagname it's empty by default as checked by tag.empty()
    map<string, string> attrs; //attribute value map
    vector<Node*> children; //children of the current tag in the HRML source code

    void create_dom(vector<string> source)
    {
        vector<string>::iterator i;
        string tagname, codeline;
        map<string, string> attrs;
        stack<Node*> s;
        Node* node;

        for (i = source.begin(); i != source.end(); i++) {
            codeline = *i;
            tagname = get_tagname(codeline);
            if (is_open_tag(codeline)) {
                attrs = get_attrs(codeline);
                if (s.empty()) {
                    this->tagname = tagname;
                    this->attrs = attrs;
                    s.push(this);
                }
                else {
                    Node* child = new Node();
                    child->tagname = tagname;
                    child->attrs = attrs;
                    node = s.top();
                    node->children.push_back(child);
                    s.push(child);
                }
            }
            else {
                s.pop();
            }
        }
    }

    string query(string query)
    {
        vector<string> q = parse_query(query);
        vector<string>::iterator i;
        vector<Node*>::iterator n;
        map<string, string>::iterator m;
        Node* node = this;
        string qtag, empty_string = "";
        bool flag = true;

        //trivial condition
        if (node->tagname != q[0]) {
            return empty_string;
        }

        for (i = q.begin() + 1; i != q.end(); i++) {
            qtag = *i;
            flag = false;

            if (qtag[0] == '~') { //check for attribute in current node
                qtag = qtag.substr(1, qtag.size());
                for (m = node->attrs.begin(); m != node->attrs.end(); m++) {
                    if (m->first == qtag) {
                        return m->second;
                    }
                }
                //this will be the last element of q for sure
                continue;
            }

            for (n = node->children.begin(); n != node->children.end(); n++) {
                if ((*n)->tagname == qtag) {
                    node = *n;
                    flag = true;
                    break;
                }
            }

            if (!flag)
                return empty_string;
        }

        return empty_string;
    }

    void print_dom()
    {
        Node *child, *dom = this;
        vector<Node*>::iterator i;
        map<string, string>::iterator ii;
        cout << this->tagname;
        if (!this->attrs.empty())
            cout << "[ ";
        for (ii = this->attrs.begin(); ii != this->attrs.end(); ii++) {
            cout << ii->first << "='" << ii->second << "' ";
        }
        if (!this->attrs.empty())
            cout << "]";
        cout << "\n";

        for (i = this->children.begin(); i != this->children.end(); i++) {
            child = *i;
            cout << child->tagname;

            if (!child->attrs.empty())
                cout << "[ ";
            for (ii = child->attrs.begin(); ii != child->attrs.end(); ii++) {
                cout << ii->first << "='" << ii->second << "' ";
            }
            if (!child->attrs.empty())
                cout << "] ";

            cout << " is the children of " << this->tagname << "\n";

            if (!child->children.empty())
                child->print_dom();
        }
    }
};

int main()
{
    int i, q, N, Q;
    string temp, result, codeline;
    vector<string> source_code, queries;
    vector<Node*> dom;
    vector<vector<string> > source_codes; //contains parts of dom having different root nodes
    vector<vector<string> >::iterator c;
    vector<string>::iterator l;
    vector<Node*>::iterator n;
    Node* root;
    stack<bool> s;
    bool found = false;

    cin >> N >> Q;

    for (i = 0; i < N; i++) {
        getline(cin >> ws, temp);

        if (is_open_tag(temp)) {
            if (i != 0 && s.empty()) {
                source_codes.push_back(source_code);
                source_code.clear();
            }
            s.push(true);
        }
        else {
            s.pop();
        }

        source_code.push_back(temp);
    }

    //saving last tree of nodes
    source_codes.push_back(source_code);
    source_code.clear();

    for (c = source_codes.begin(); c != source_codes.end(); c++) {
        source_code = *c;
        root = new Node();
        root->create_dom(source_code);
        dom.push_back(root);
    }

    for (q = 0; q < Q; q++) {
        found = false;
        getline(cin >> ws, temp);
        for (n = dom.begin(); n != dom.end(); n++) {
            root = *n;
            result = root->query(temp);
            if (!result.empty()) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Not Found!";
        }
        else {
            cout << result;
        }
        cout << "\n";
    }

    return 0;
}