
string reverseWords(string s) {

    int front = 0, back = 1;
    vector<char> chars(s.begin(), s.end());

    for(int i = 0; i < chars.size(); i++)
    {
        if(chars[i] == ' ')
        {
            back = i - 1;
            flip(chars, front, back);
            front = i + 1;
        }
        else if(i == chars.size() - 1)
        {
            back = i;
            flip(chars, front, back);
            front = i + 1;
        } 
    }
    string reverseString(chars.begin(), chars.end());

    return reverseString;

}

void flip(vector<char>& chars, int begin, int end)
{
    char temp;

    while(begin < end)
    {
        temp = chars[begin];
        chars[begin] = chars[end];
        chars[end] = temp;
        begin++;
        end--;
    }
}