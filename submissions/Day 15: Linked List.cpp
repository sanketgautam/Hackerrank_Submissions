/*-----------------------------------------------------------------------

Problem Title: Day 15: Linked List
Problem Link: https://www.hackerrank.com/challenges/30-linked-list
Author: sanketgautam
Language : C++14

-----------------------------------------------------------------------*/


Node* insert(Node* head, int data)
{
    Node* n = new Node(data);
    //if no elements in the list
    if (head == NULL) {
        head = n;
    }
    else {
        //if elements are present in list
        Node* temp = head;
        for (; temp->next != NULL;) {
            temp = temp->next;
        }
        temp->next = n;
    }
    return head;
}