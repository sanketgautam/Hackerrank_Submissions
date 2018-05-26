/*-----------------------------------------------------------------------

Problem Title: Abstract Classes - Polymorphism
Problem Link: https://www.hackerrank.com/challenges/abstract-classes-polymorphism
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


class LRUCache : public Cache {
public:
    LRUCache(int cp)
    {
        this->cp = cp;
    }
    void set(int key, int value)
    {
        map<int, Node*>::iterator i;
        Node* node;
        i = mp.find(key);

        if (mp.empty()) {
            node = new Node(key, value);
            mp.insert(pair<int, Node*>(key, node));
            head = tail = node;
            return;
        }

        if (i != mp.end()) {
            node = i->second;
            if (node->value != value) {
                node->value = value;
            }
        }
        else {
            if (mp.size() == cp) {
                node = tail;
                tail = tail->prev;
                mp.erase(node->key);
            }
            node = new Node(key, value);
            mp.insert(pair<int, Node*>(key, node));
        }

        if (node->prev != NULL)
            node->prev->next = node->next;
        if (node->next != NULL)
            node->next->prev = node->prev;

        node->next = head;
        node->prev = NULL;

        head->prev = node;
    }

    int get(int key)
    {
        map<int, Node*>::iterator i;
        Node* node;
        i = mp.find(key);

        if (i == mp.end()) {
            return -1;
        }

        node = i->second;

        return node->value;
    }
};