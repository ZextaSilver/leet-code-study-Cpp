int largestPerimeter(vector<int>& nums) {

    int largestSide = 0;
    int perimeter = 0;
    
    sort(nums.begin(), nums.end());

    for(int i = 2; i < nums.size(); i++)
    {
        if(nums.rbegin()[i] + nums.rbegin()[i - 1] > nums.rbegin()[i - 2]
        && nums.rbegin()[i] + nums.rbegin()[i - 2] > nums.rbegin()[i - 1]
        && nums.rbegin()[i - 1] + nums.rbegin()[i - 2] > nums.rbegin()[i])
        {
            perimeter = nums.rbegin()[i] + nums.rbegin()[i - 1] + nums.rbegin()[i - 2];
            break;
        }
    }

    return perimeter;

}