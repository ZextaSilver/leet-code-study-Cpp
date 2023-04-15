
int candy(vector<int>& ratings) {
    int size = ratings.size();
    if(size < 2)
    {
        return size;
    }

    //everyone must have at least 1 candy
    vector<int> num(size, 1);

    //if score higher than the one in front, gain 1+ candy
    for(int i = 1; i < size; i++)
    {
        if(ratings[i] > ratings[i - 1])
        {
            num[i] = num[i - 1] + 1;
        }
    }

    //if a score higher than b in back, don't change a's candy unless a has less candy than b + 1;
    for(int i = size - 1; i > 0; i--)
    {
        if(ratings[i] < ratings[i - 1])
        {
            num[i - 1] = max(num[i - 1], num[i] + 1);
        }
    }

    //add from begin to end, starting value with 0
    return accumulate(num.begin(), num.end(), 0);
}