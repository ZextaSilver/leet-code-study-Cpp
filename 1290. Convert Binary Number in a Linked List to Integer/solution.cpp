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

int getDecimalValue(ListNode* head) {

    ListNode* p = head;
    int powerfulNumber = 0, binaryToInt = 0;

    while(p -> next != nullptr)
    {
        powerfulNumber++;
        p = p -> next;
    }

    for( ; powerfulNumber >= 0; powerfulNumber--)
    {
        binaryToInt += head->val * pow(2, powerfulNumber);
        head = head -> next;
    }

    return binaryToInt;


}