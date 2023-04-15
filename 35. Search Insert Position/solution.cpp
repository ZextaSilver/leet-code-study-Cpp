int searchInsert(vector<int>& nums, int target) {

    return binarySearch(nums, 1, nums.size(), target);

}

int binarySearch(vector<int> nums, int startPoint, int endPoint, int target)
{
    if(target <= nums[0])
    {
        return 0;
    }
    if(target > nums[nums.size()-1])
    {
        return nums.size();
    }

    if(endPoint >= startPoint)
    {
        int midPoint = startPoint + ((endPoint - startPoint) / 2);

        if(nums[midPoint] == target)
        {
            return midPoint;
        }
        if(nums[midPoint] > target)
        {
            return binarySearch(nums, startPoint, midPoint - 1, target);
        }
        if(nums[midPoint] < target)
        {
            return binarySearch(nums, midPoint + 1, endPoint, target);
        }

    }

    return startPoint + ((endPoint - startPoint) / 2);

}