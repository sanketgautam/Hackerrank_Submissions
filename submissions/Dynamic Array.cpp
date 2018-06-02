/*-----------------------------------------------------------------------

Problem Title: Dynamic Array
Problem Link: https://www.hackerrank.com/challenges/dynamic-array
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

vector<int> dynamicArray(int n, vector<vector<int> > queries)
{
    int i, q, x, y, index, size, lastAnswer = 0;
    vector<vector<int> > seqList(n);
    vector<int> ans;

    for (i = 0; i < queries.size(); i++) {
        q = queries[i][0];
        x = queries[i][1];
        y = queries[i][2];

        index = (x ^ lastAnswer) % n;

        if (q == 1) {
            seqList[index].push_back(y);
        }
        else {
            size = (seqList[index]).size();
            lastAnswer = seqList[index][y % size];
            ans.push_back(lastAnswer);
        }
    }

    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nq_temp;
    getline(cin, nq_temp);

    vector<string> nq = split_string(nq_temp);

    int n = stoi(nq[0]);

    int q = stoi(nq[1]);

    vector<vector<int> > queries(q);
    for (int queries_row_itr = 0; queries_row_itr < q; queries_row_itr++) {
        queries[queries_row_itr].resize(3);

        for (int queries_column_itr = 0; queries_column_itr < 3; queries_column_itr++) {
            cin >> queries[queries_row_itr][queries_column_itr];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<int> result = dynamicArray(n, queries);

    for (int result_itr = 0; result_itr < result.size(); result_itr++) {
        fout << result[result_itr];

        if (result_itr != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string)
{
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char& x, const char& y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}