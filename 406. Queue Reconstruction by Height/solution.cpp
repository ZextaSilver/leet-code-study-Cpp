
vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
    vector<vector<int>> ans;

    sort(people.begin(), people.end(), [](auto& a, auto& b) 
    {
        return a[0] == b[0] ? a[1] < b[1] : a[0] > b[0];
    });

    for (auto item : people)
    {
        cout << item[0] << " " << item[1] << ", ";
    }
        

    for (auto p : people)
        ans.insert(ans.begin() + p[1], p);

    return ans;
}