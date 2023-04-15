
bool isUgly(int n) {

    //negative numbers are all wrong
    if(n <= 0)
    {
        return false;
    }

    //if n != 1, repeatly delete itself by the following
    while(n != 1)
    {
        //if can be % by 2,3,5, then keep reducing it, else they do not have prime factor, thus not ugly number
        if(n % 2 == 0)
        {
            n /= 2;
        }
        else if(n % 3 == 0)
        {
            n /= 3;
        }
        else if(n % 5 == 0)
        {
            n /= 5;
        }
        else
        {
            return false;
        }
    }

    //break out from the while loop, means the number is reduced to 1, thus it's an ugly number
    return true;
}