vector<int> runningSum(vector<int>& nums) {

    vector<int> sumOfNums;
    for(int i = 0; i < nums.size(); i++)
    {
        if(i == 0)
        {
            sumOfNums.push_back(nums[i]);
        }
        else
        {
            sumOfNums.push_back(nums[i] + sumOfNums[i-1]);
        }
    }

    return sumOfNums;

}