
void rotate(vector<int>& nums, int k) {
    
    // O(n)
    // for(int i = 0; i < k; i++)
    // {
    //     int temp = nums[nums.size() - 1];
    //     nums.insert(nums.begin(), temp);
    //     nums.pop_back();
    // }

    //O(1)
    if(nums.size() == 1)
    {
        return;
    }

    k %= nums.size();

    flip(nums, 0, nums.size() - 1);
    flip(nums, 0, k - 1);
    flip(nums, k, nums.size() - 1);
    

}

void flip(vector<int>& nums, int begin, int end)
{
    int temp;

    while(begin < end)
    {
        temp = nums[begin];
        nums[begin] = nums[end];
        nums[end] = temp;
        begin++;
        end--;
    }
}