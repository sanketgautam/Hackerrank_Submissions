/*-----------------------------------------------------------------------

Problem Title: Inserting a Node Into a Sorted Doubly Linked List
Problem Link: https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data)
{

    DoublyLinkedListNode* node = new DoublyLinkedListNode(data);
    DoublyLinkedListNode* temp = head;

    if (!head)
        head = node;

    if (head->data > data) {
        node->next = head;
        head->prev = node;
        head = node;
    }
    else {
        while (temp->next && temp->data <= data) {
            temp = temp->next;
        }
        if (!temp->next && temp->data <= data) {
            temp->next = node;
            node->prev = temp;
        }
        else {
            node->next = temp;
            node->prev = temp->prev;
            temp->prev->next = node;
            temp->prev = node;
        }
    }

    return head;
}