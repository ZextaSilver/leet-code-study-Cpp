int fib(int n) 
{
    // O(2^n)
    // if(n == 0)
    //     return 0;
    // else if(n == 1)
    //     return 1;
    // else if(n > 1)
    // {
    //     return fib(n - 1) + fib(n - 2);
    // }
    // else
    //     return 0;
    

    // O(n^2)
    // vector<int> fibSequence{0, 1};

    // for(int i = 2; i <= n; i++)
    // {
    //     fibSequence.push_back(fibSequence[i - 1] + fibSequence[i - 2]);
    // }

    // return fibSequence[n];


    //O(n)
    int a = 0, b = 1, c;

    for(int i = 0; i <= n; i++)
    {
        if(i == 0 || i == 1)
            c = i;
        else
        {
            c = a + b;
            a = b;
            b = c;
        }
    }

    return c;
}