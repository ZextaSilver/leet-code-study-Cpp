
bool isSubsequence(string s, string t) {

    if(s.size() > t.size())
    {
        return false;
    }

    int sCharIndex = 0;
    
    for(int i = 0; i < t.size(); i++)
    {
        if(t[i] == s[sCharIndex])
        {
            sCharIndex++;
        }
    }

    if(sCharIndex == s.size())
    {
        return true;
    }

    return false;
}