/*-----------------------------------------------------------------------

Problem Title: Merge two sorted linked lists
Problem Link: https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists
Author: sanketgautam
Language : C++

-----------------------------------------------------------------------*/


SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2)
{

    SinglyLinkedListNode *head, *temp;

    if (!head1)
        return head2;

    if (!head2)
        return head1;

    if (head2->data < head1->data) {
        temp = head2;
        head = head2;
        head2 = head2->next;
    }
    else {
        temp = head1;
        head = head1;
        head1 = head1->next;
    }

    while (head1 && head2) {
        if (head2->data < head1->data) {
            temp->next = head2;
            head2 = head2->next;
        }
        else {
            temp->next = head1;
            head1 = head1->next;
        }

        temp = temp->next;
    }

    if (head1) {
        while (head1) {
            temp->next = head1;
            temp = temp->next;
            head1 = head1->next;
        }
    }

    if (head2) {
        while (head2) {
            temp->next = head2;
            temp = temp->next;
            head2 = head2->next;
        }
    }

    return head;
}