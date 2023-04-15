
int minimumOperations(vector<int>& nums) {
    
    //sort array, get rid of dups
    set<int> sorted(nums.begin(), nums.end());

    //only count unique non-zero elements appeared in the set
    return sorted.count(0) ? sorted.size() - 1 : sorted.size();
}