/*-----------------------------------------------------------------------

Problem Title: Insert a Node at the Tail of a Linked List
Problem Link: https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data)
{
    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* temp = head;

    if (head == nullptr) {
        head = node;
    }
    else {
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = node;
    }

    return head;
}