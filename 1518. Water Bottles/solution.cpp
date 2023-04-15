
int numWaterBottles(int numBottles, int numExchange) {
    int count = numBottles;

    while(numBottles > 0 && numBottles >= numExchange)
    {
        count += numBottles/numExchange;
        numBottles = (numBottles/numExchange) + (numBottles % numExchange);
    }

    return count;
}