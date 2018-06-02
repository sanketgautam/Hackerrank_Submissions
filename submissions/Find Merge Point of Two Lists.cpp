/*-----------------------------------------------------------------------

Problem Title: Find Merge Point of Two Lists
Problem Link: https://www.hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2)
{

    SinglyLinkedListNode *cur1 = head1, *cur2 = head2;

    while (cur1 != cur2) {

        if (!cur1) {
            cur1 = head2;
        }
        else {
            cur1 = cur1->next;
        }

        if (!cur2) {
            cur2 = head1;
        }
        else {
            cur2 = cur2->next;
        }
    }

    return cur1->data;
}