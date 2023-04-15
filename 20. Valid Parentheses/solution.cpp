bool isValid(string s) {

    vector<char> listOfParentheses{};
    
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            listOfParentheses.push_back(s[i]);
        }
        else
        {
            if(!listOfParentheses.empty())
            {
                if(s[i] == ')' && listOfParentheses.back() != '(')
                {
                    return false;
                }
                else if(s[i] == ']' && listOfParentheses.back() != '[')
                {
                    return false;
                }
                else if(s[i] == '}' && listOfParentheses.back() != '{')
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
            listOfParentheses.pop_back();
        }
    }

    if(listOfParentheses.size() == 0)
        return true;

    return false;
}