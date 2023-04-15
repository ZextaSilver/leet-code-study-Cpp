
bool canPermutePalindrome(string s) {

    int hash[127] = {0};
    int howManyOdd = 0;

    for(auto character : s)
    {
        hash[character]++;
    }

    for(int i = 0; i < 127; i++)
    {
        if(hash[i] % 2 != 0)
        {
            howManyOdd++;
        }
    }
    
    if(howManyOdd <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }

}