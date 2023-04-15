
bool isPalindrome(string s) {

    vector<char> forwardString;

    for(auto word : s)
    {
        if((int(word) >= 65 && int(word) <= 90) || (int(word) >= 97 && int(word) <= 122) || (int(word) >= 48 && int(word) <= 57))
        {
            if(int(word) >= 65 && int(word) <= 90)
            {
                forwardString.push_back(char(int(word) + 32));
            }
            else
            {
                forwardString.push_back(word);
            }
        }
    }

    vector<char> backwardString(forwardString.rbegin(), forwardString.rend());

    for(int i = 0; i < forwardString.size(); i++)
    {
        if(forwardString[i] != backwardString[i])
        {
            return false;
        }
    }

    return true;
}