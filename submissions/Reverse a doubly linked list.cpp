/*-----------------------------------------------------------------------

Problem Title: Reverse a doubly linked list
Problem Link: https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


DoublyLinkedListNode* reverse(DoublyLinkedListNode* head)
{

    DoublyLinkedListNode *temp = head, *t = head, *prev;

    while (temp) {
        prev = temp->prev;
        temp->prev = temp->next;
        temp->next = prev;
        t = temp;
        temp = temp->prev;
    }

    return t;
}