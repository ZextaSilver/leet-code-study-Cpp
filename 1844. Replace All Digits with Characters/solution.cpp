string replaceDigits(string s) {

        string answer;

        for(int i = 0; i < s.length(); i++)
        {
            if(i % 2 == 0)
                answer += s[i];
            else
                answer += shift(s[i - 1] , int(s[i]) - int('0'));
                
        }
        
        return answer;
        
}

// helper function
string shift(char c, int x)
{
    string targetChar;
    if((int(c) + x) <= int('z'))
        targetChar = char(c + x);
    else
        targetChar = "z";

    return targetChar;
}