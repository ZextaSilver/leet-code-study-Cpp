
vector<int> partitionLabels(string s) {
    vector<int> partition;
    unordered_map<char, int> dictionary;

    int start = 0, end = 0;

    for(int i = 0; i < s.size(); i++)
    {
        dictionary[s[i]] = i;
    }

    for(int i = 0; i < s.size(); i++)
    {
        end = max(end, dictionary[s[i]]);
        if(i == end)
        {
            partition.push_back(end - start + 1);
            start = end + 1;
        }
    }

    return partition;
}