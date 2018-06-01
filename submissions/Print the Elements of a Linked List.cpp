/*-----------------------------------------------------------------------

Problem Title: Print the Elements of a Linked List
Problem Link: https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


void printLinkedList(SinglyLinkedListNode* head)
{

    while (head) {
        cout << head->data << "\n";
        head = head->next;
    }
}