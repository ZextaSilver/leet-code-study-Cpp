int pivotIndex(vector<int>& nums) {
    int sum = 0;
    int pivot = 0;
    int leftSum = 0;
    for(auto num : nums)
    {
        sum += num;
    }

    for(;pivot < nums.size(); pivot++)
    {
        int rightSum = sum - nums[pivot] - leftSum;
        if(leftSum == rightSum)
        {
            return pivot;
        }
        else
        {
            leftSum += nums[pivot];
        }
    }

    return -1;
}