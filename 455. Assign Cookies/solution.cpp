
int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int gPtr = 0, sPtr = 0;

    while(gPtr < g.size() && sPtr < s.size())
    {
        if(s[sPtr] >= g[gPtr])
        {
            sPtr++;
            gPtr++;
        }
        else
        {
            sPtr++;
        }
    }

    return gPtr;
}