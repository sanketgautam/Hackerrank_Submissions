/*-----------------------------------------------------------------------

Problem Title: Reverse a doubly linked list
Problem Link: https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


DoublyLinkedListNode* reverse(DoublyLinkedListNode* head)
{

    DoublyLinkedListNode *cur = head, *prev, *start;

    while (cur) {
        prev = cur->prev;
        cur->prev = cur->next;
        cur->next = prev;
        start = cur;
        cur = cur->prev;
    }

    return start;
}