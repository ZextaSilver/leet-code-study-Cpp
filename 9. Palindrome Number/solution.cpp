
bool isPalindrome(int x) {

    //solution 2
    if(x < 0)
    {
        return false;
    }

    string xtoStr = to_string(x);

    string reverseStr(xtoStr.rbegin(), xtoStr.rend());

    return xtoStr == reverseStr ? true : false;


    // solution 1
    // bool palindrome = false;
    // vector<int> storedNums;

    // if(x >= 0)
    // {
    //     if(x < 10)
    //     {
    //         palindrome = true;
    //         return palindrome;
    //     }
    //     else
    //     {
    //         while(x / 10 != 0)
    //         {
    //             storedNums.push_back(x % 10);
    //             x /= 10;
    //         }
    //         storedNums.push_back(x);
    //     }
    // }

    // int i = 0;
    // int j = storedNums.size() - 1;

    // while(i <= j)
    // {
    //     if(storedNums[i] != storedNums[j])
    //     {
    //         palindrome = false;
    //         break;
    //     }
    //     i++;
    //     j--;
    //     palindrome = true;
    // }

    // return palindrome;
}