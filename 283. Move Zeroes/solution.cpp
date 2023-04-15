
void moveZeroes(vector<int>& nums) {
    //双指针 指针1从前往后 指针2从后往前
    //指针一往后移动 若当前数值为0 则将0移至最后一位 并且将指针2位置向前移动一位
    int front = 0, back = nums.size() - 1;

    while(front != back)
    {
        if(nums[front] == 0)
        {
            nums.erase(nums.begin() + front);
            back--;
            nums.insert(nums.end(), 0);
            
        }
        else
        {
            front++;
        }
    }

}