
int firstUniqChar(string s) {
    unordered_map<char, int> charStore;

    for(auto character : s)
    {
        ++charStore[character];
    }

    for(int i = 0; i < s.size(); i++)
    {
        if(charStore[s[i]] == 1)
        {
            return i;
        }
    }


    return -1;
}