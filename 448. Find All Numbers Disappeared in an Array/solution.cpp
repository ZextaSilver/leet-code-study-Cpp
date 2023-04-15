
vector<int> findDisappearedNumbers(vector<int>& nums) {

    // use space O(n)
    // vector<int> disNum;

    // map<int, int> numMap;

    // for(int i = 1; i <= nums.size(); i++)
    // {
    //     numMap[i] = 0;
    // }

    // for(auto num : nums)
    // {
    //     numMap[num] = 1;
    // }

    // for(auto item : numMap)
    // {
    //     if(item.second == 0)
    //     {
    //         disNum.push_back(item.first);
    //     }
    // }

    // return disNum;

    // use space O(1)
    int n = nums.size();
    for (auto& num : nums) {
        int x = (num - 1) % n;
        nums[x] += n;
    }
    vector<int> ret;
    for (int i = 0; i < n; i++) {
        cout << nums[i] << ", ";
        if (nums[i] <= n) {
            ret.push_back(i + 1);
        }
    }
    return ret;
}