/*-----------------------------------------------------------------------

Problem Title: Reverse a linked list
Problem Link: https://www.hackerrank.com/challenges/reverse-a-linked-list
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


SinglyLinkedListNode* reverse(SinglyLinkedListNode* head)
{

    SinglyLinkedListNode *prev = nullptr, *cur = head, *temp;

    while (cur) {
        temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
    }

    return prev;
}