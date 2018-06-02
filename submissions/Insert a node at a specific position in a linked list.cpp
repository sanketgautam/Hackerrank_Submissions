/*-----------------------------------------------------------------------

Problem Title: Insert a node at a specific position in a linked list
Problem Link: https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position)
{

    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* temp = head;
    position--;

    if (!head || position == -1) {
        node->next = head;
        head = node;
    }
    else {
        while (position) {
            temp = temp->next;
            position--;
        }
        node->next = temp->next;
        temp->next = node;
    }

    return head;
}