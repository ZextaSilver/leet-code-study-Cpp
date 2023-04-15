/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

ListNode* reverseList(ListNode* head) {

    if(head)
    {
        ListNode* a = nullptr;
        ListNode* b = head;
        ListNode* c = b->next;

        while(c)
        {
            b->next = a;
            a = b;
            b = c;
            c = c->next;
        }

        b->next = a;
        head = b;
    }

    return head;

}