
int singleNumber(vector<int>& nums) {

    int theSingle = 0;

    if(nums.size() == 1)
    {
        return nums[0];
    }

    map<int, int> numberMap;

    for(int i = 0; i < nums.size(); i++)
    {
        if(numberMap.find(nums[i]) == numberMap.end())
        {
            numberMap[nums[i]] = 1;
        }
        else
        {
            numberMap[nums[i]] = 2;
        }
    }

    for(auto item : numberMap)
    {
        if(item.second == 1)
        {
            theSingle = item.first;
        }
    }

    return theSingle;
}