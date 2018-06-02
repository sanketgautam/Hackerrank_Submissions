/*-----------------------------------------------------------------------

Problem Title: Delete duplicate-value nodes from a sorted linked list
Problem Link: https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head)
{

    SinglyLinkedListNode *temp = head, *t;

    while (temp->next) {
        if (temp->data == temp->next->data) {
            t = temp->next;
            temp->next = temp->next->next;
            free(t);
        }
        else {
            temp = temp->next;
        }
    }

    return head;
}