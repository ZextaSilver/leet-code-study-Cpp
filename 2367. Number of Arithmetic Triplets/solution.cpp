
int arithmeticTriplets(vector<int>& nums, int diff) {
    int ret = 0;

    int size = nums[nums.size()-1] + 1;

    vector<int> hashTable(size, 0);

    for(int i = 0; i < nums.size(); i++)
    {
        hashTable[nums[i]] = 1;
    }

    for(int i = 0; i < size; i++)
    {
        cout << hashTable[i] << ", ";
    }

    int pos = 0;

    while(pos + 2 * diff < size)
    {
        if(hashTable[pos] == 1 && hashTable[pos + diff] == 1 && hashTable[pos + 2 * diff] == 1)
        {
            ret++;
        }
        pos++;
    }

    return ret;

}