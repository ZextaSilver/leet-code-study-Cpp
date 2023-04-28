bool equalFrequency(string word) {

    vector<int> count(26);

    for(auto character : word)
    {
        count[character - 'a']++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(count[i] == 0)
        {
            continue;
        }
        count[i]--;
        unordered_set<int> st;
        for(auto num : count)
        {
            if(num)
            {
                st.insert(num);
            }
        }
        if(st.size() == 1)
        {
            return true;
        }
        count[i]++;
    }

    return false;
}