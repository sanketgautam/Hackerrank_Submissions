/*-----------------------------------------------------------------------

Problem Title: Get Node Value
Problem Link: https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


int getNode(SinglyLinkedListNode* head, int positionFromTail)
{

    SinglyLinkedListNode *cur = head, *res = head;
    int i = 0;

    while (cur) {
        cur = cur->next;
        if (i > positionFromTail) {
            res = res->next;
        }
        i++;
    }

    return res->data;
}