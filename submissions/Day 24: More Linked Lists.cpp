/*-----------------------------------------------------------------------

Problem Title: Day 24: More Linked Lists
Problem Link: https://www.hackerrank.com/challenges/30-linked-list-deletion
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


Node* removeDuplicates(Node* head)
{
    Node* temp = head;

    while (temp->next) {
        if (temp->data == temp->next->data) {
            temp->next = temp->next->next;
        }
        else {
            temp = temp->next;
        }
    }

    return head;
}