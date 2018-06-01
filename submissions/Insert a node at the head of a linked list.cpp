/*-----------------------------------------------------------------------

Problem Title: Insert a node at the head of a linked list
Problem Link: https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data)
{

    SinglyLinkedListNode* head = llist;
    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);

    if (!head) {
        head = node;
    }
    else {
        node->next = head;
        head = node;
    }

    return head;
}