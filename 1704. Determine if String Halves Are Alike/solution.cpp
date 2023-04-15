bool halvesAreAlike(string s) {
    int vowelsA = 0, vowelsB = 0;

    for(int i = 0; i < s.length(); i++) //O(m)
    {
        if(checkIsVowel(s[i]))
        {
            if(i < (s.length() / 2)) // stringA
            {
                vowelsA++;
            }
            else                     // stringB
            {
                vowelsB++;
            }
        }
    }

    if(vowelsA == vowelsB)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool checkIsVowel(char c)
{
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    bool isVowel = false;

    for(auto vowel : vowels) //O(n)
    {
        if(c == vowel)
        {
            isVowel = true;
            break;
        }
    }
    return isVowel;
}