/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    
    ListNode* p = headA;
    ListNode* q = headB;
    ListNode* intersectionNode = nullptr;

    vector<int> recordB;

    while(q)
    {
        recordB.push_back(q->val);
        q = q->next;
    }

    q = headB;

    while(p)
    {
        p->val++;
        p = p->next;
    }

    p = headA;

    for(int i = 0; i < recordB.size(); i++)
    {
        if(recordB[i] != q->val)
        {
            intersectionNode = q;
            break;
        }

        q = q->next;
    }

    while(p)
    {
        p->val--;
        p = p->next;
    }

    return intersectionNode;
}