/*-----------------------------------------------------------------------

Problem Title: Delete a Node
Problem Link: https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position)
{

    SinglyLinkedListNode *temp = head, *t;

    if (!position) { //position is 0
        head = head->next;
        free(temp);
    }
    else {
        position--;
        while (position && temp->next) {
            temp = temp->next;
            position--;
        }
        t = temp->next;
        temp->next = temp->next->next;
        free(t);
    }

    return head;
}