
ListNode *detectCycle(ListNode *head) {

    if(!head)
    {
        return NULL;
    }
    
    ListNode* p = head;

    map<ListNode*, int> nodeMap;

    while(nodeMap[p] != 1)
    {
        nodeMap[p]++;
        if(p->next)
        {
            p = p->next;
        }
        else
        {
            return NULL;
        }
    }

    return p;
}