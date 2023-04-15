
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> targetNums;

    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = i + 1; j < nums.size(); j++)
        {
            if(nums[i] + nums[j] == target)
            {
                targetNums.push_back(i);
                targetNums.push_back(j);
                return targetNums;
            }
        }
    }

    return targetNums;
}