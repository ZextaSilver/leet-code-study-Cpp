bool containsDuplicate(vector<int>& nums) {
    map<int, int> numOccurrences;
    bool notDistinct = false;
    
    for(auto num : nums)
    {
        if(numOccurrences.find(num) != numOccurrences.end())
        {
            // numOccurrences[num] += 1;
            if(++numOccurrences[num] >= 2)
            {
                notDistinct = true;
            }
        }
        else
        {
            numOccurrences.insert(pair<int, int>(num, 1));
        }
    }

    return notDistinct;
}