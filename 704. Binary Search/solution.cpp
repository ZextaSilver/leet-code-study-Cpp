int search(vector<int>& nums, int target) {

    return binarySeach(nums, 0, nums.size() - 1, target);

}

int binarySeach(vector<int> nums, int startPoint, int endPoint, int targetValue)
{
    if(endPoint >= startPoint)
    {
        int medianPoint = startPoint + ((endPoint - startPoint) / 2);

        if(targetValue == nums[medianPoint])
        {
            return medianPoint;
        }
        if(targetValue > nums[medianPoint])
        {
            return binarySeach(nums, medianPoint + 1, endPoint, targetValue);
        }
        if(targetValue < nums[medianPoint])
        {
            return binarySeach(nums, startPoint, medianPoint - 1, targetValue);
        }
    }

    return -1;

}