/*-----------------------------------------------------------------------

Problem Title: Compare two linked lists
Problem Link: https://www.hackerrank.com/challenges/compare-two-linked-lists
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2)
{

    if (!head1 || !head2)
        return head1 == head2;

    while (head1 && head2) {
        if (head1->data != head2->data)
            return false;
        head1 = head1->next;
        head2 = head2->next;
    }

    if (head1 || head2)
        return false;

    return true;
}