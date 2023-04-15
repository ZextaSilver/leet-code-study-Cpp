int numberOfSteps(vector<int> num) {

    int vectorSize = num.size();

    vector<int> answerVector{};
    int numOfSteps = 0;

    for(int i == 0; i < vectorSize; i++)
    {
        while(num[i] > 0)
        {
            num[i] = performStep(num[i]);
            numOfSteps++;
        }
        answerVector.push_back(numOfSteps);
        
    }

    
    return answerVector;
}


int performStep(int num)
{
    return (num % 2 == 0) ? (num / 2) : (num - 1);
}

// test function
// boolean testPerformStep()
// {
//     boolean correct1 = 7 == performStep(14);
//     boolean correct2 = 4 == performStep(8);
//     boolean correct3 = 0 == performStep(0);

//     boolean test1 = 6 == numberOfSteps(14);

//     return correct1 && correct2 && correct3;
// }
