
int longestPalindrome(string s) {

    //check how long the string is
    int longestLength = s.size();
    
    //dictionary to record word appear times
    map<char, int> charAppearTime;

    //does the string contains at least 1 character that appeared odd times
    bool haveOdd = false;

    //record appear times
    for(auto character : s)
    {
        charAppearTime[character]++;
    }

    //check appear times
    for(auto item : charAppearTime)
    {
        //if this character appeared odd times
        if(item.second % 2 != 0)
        {
            //-1 to make the appear time can be palindrom
            longestLength--;
            //1 odd appear character condition true
            haveOdd = true;
        }
    }

    //if there is character appeared only odd times, add 1 so that the biggest odd character can still be palindrom ex."eee" is palindrom
    return haveOdd ? ++longestLength : longestLength;
}