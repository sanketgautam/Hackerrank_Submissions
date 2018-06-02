/*-----------------------------------------------------------------------

Problem Title: Cycle Detection
Problem Link: https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


bool has_cycle(SinglyLinkedListNode* head)
{

    SinglyLinkedListNode *p1 = head, *p2 = head;

    if (!head)
        return false;

    while (p2 && p2->next) {
        p1 = p1->next;
        p2 = p2->next->next;

        if (p1 == p2) {
            return true;
        }
    }

    return false;
}