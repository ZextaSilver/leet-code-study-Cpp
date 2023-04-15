vector<int> sortedSquares(vector<int>& nums) {

    int front = 0, back = nums.size() - 1;

    vector<int> sortedList{};

    //前指针与后指针对比 大则添加 小则等下次对比
    for(int i = nums.size() - 1; i >= 0; i--)
    {
        int a = nums[front] * nums[front], b = nums[back] * nums[back];

        if(a >= b)
        {
            sortedList.insert(sortedList.begin(), a);
            front++;
        }
        else
        {
            sortedList.insert(sortedList.begin(), b);
            back--;
        }
    }


    return sortedList;
}