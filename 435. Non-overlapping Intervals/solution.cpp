
int eraseOverlapIntervals(vector<vector<int>>& intervals) {

    if(intervals.size() < 2)
    {
        return 0;
    }

    sort(intervals.begin(), intervals.end(), [](vector<int> &a, vector<int>&b){return a[1] < b[1];});

    int remove = 0;

    int m = 0, n = 1;

    while(n < intervals.size())
    {
        if(intervals[n][0] < intervals[m][1])
        {
            remove++;
            n++;
        }
        else
        {
            m = n;
            n++;
        }
    }

    return remove;
}