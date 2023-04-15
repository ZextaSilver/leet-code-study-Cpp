
bool isHappy(int n) {
    
    bool isHappyNum = true;
    vector<int> numList{};
    vector<int> cycleList{};

    while(n != 1)
    {
        numList = breakDownNum(n);
        n = sumOfSquares(numList);
        // if(find(cycleList.begin(), cycleList.end(), n) != cycleList.end())
        // {
        //     isHappyNum = false;
        //     break;
        // }
        // else
        // {
        //     cycleList.push_back(n);
        // }
        if(n == 4 || n == 16 || n == 37 || n == 58 || n == 89 || n == 145 || n == 42 || n == 20)
        {
            isHappyNum = false;
            break;
        }
    }

    return isHappyNum;
}

int sumOfSquares(vector<int> nums)
{
    int sum = 0;
    for(auto num : nums)
    {
        sum += pow(num, 2);
    }
    return sum;
}

vector<int> breakDownNum(int num)
{
    vector<int> numList{};
    while(num != 0)
    {
        numList.push_back(num % 10);
        num /= 10;
    }
    return numList;
}