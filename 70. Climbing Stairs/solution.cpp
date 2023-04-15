
int climbStairs(int n) {

    if(n == 1)
    {
        return 1;
    }
    if(n == 2)
    {
        return 2;
    }

    int first = 1, second = 2, fibonacciAnswer = first + second;

    for(int i = 3; i <= n; i++)
    {
        fibonacciAnswer = first + second;
        first = second;
        second = fibonacciAnswer;
    }

    return fibonacciAnswer;
}