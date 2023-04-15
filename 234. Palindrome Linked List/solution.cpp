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

bool isPalindrome(ListNode* head) {

    bool ans = true;
    stack<int> listStk;
    int listLength = 0;
    int mid;
    int count = 0;
    ListNode* p = head;

    while(p)
    {
        listLength++;
        p = p->next;
    }

    mid = listLength / 2;

    p = head;


    while(p)
    {
        if(count < mid)
        {
            listStk.emplace(p->val);
        }
        else if((listLength % 2 == 1) ? (count > mid) : (count >= mid))
        {
            if(p->val != listStk.top())
            {
                ans = false;
                break;
            }
            else
            {
                listStk.pop();
            }
        }
        count++;
        p = p->next;
    }

    return ans;
}