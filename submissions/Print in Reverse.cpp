/*-----------------------------------------------------------------------

Problem Title: Print in Reverse
Problem Link: https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


void reversePrint(SinglyLinkedListNode* head)
{

    SinglyLinkedListNode *prev = nullptr, *cur = head, *temp;
    //reverse a linked list
    while (cur) {
        temp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = temp;
    }
    //new linked list start from prev

    //then print it
    while (prev) {
        cout << prev->data << "\n";
        prev = prev->next;
    }
}