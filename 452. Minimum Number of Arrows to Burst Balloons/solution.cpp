
int findMinArrowShots(vector<vector<int>>& points) {
    int shots = 0;

    if(points.size() == 1)
    {
        return 1;
    }

    sort(points.begin(), points.end(), [](vector<int>&a, vector<int>&b){return a[1] < b[1];});

    int m = 0, n = 0;

    while(m < points.size())
    {
        while(n < points.size())
        {
            if(points[m][1] >= points[n][0])
            {
                n++;
            }
            else
            {
                break;
            }
        }
        shots++;
        m = n;
    }

    return shots;
}