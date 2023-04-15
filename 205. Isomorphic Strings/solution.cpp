
bool isIsomorphic(string s, string t) {
    
    map<char, int> sDictionary;
    map<char, int> tDictionary;
    int charIdentifier = 1;

    for(int i = 0; i < s.size(); i++)
    {
        if(sDictionary.find(s[i]) == sDictionary.end())
        {
            sDictionary[s[i]] = charIdentifier;
            s[i] = charIdentifier + '0';
            charIdentifier++;
        }
        else
        {
            s[i] = sDictionary[s[i]] + '0';
        }
    }

    charIdentifier = 1;

    for(int i = 0; i < t.size(); i++)
    {
        if(tDictionary.find(t[i]) == tDictionary.end())
        {
            tDictionary[t[i]] = charIdentifier;
            t[i] = charIdentifier + '0';
            charIdentifier++;
        }
        else
        {
            t[i] = tDictionary[t[i]] + '0';
        }
    }

    if(s == t)
    {
        return true;
    }
    else
    {
        return false;
    }
}