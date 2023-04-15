
bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    
    //////////////////  METHOD 1
    // int size = flowerbed.size();

    // if(size == 1 && flowerbed[0] == 0)
    // {
    //     return true;
    // }

    // for(int i = 0; i < size; i++)
    // {
    //     if((i == size - 1 && flowerbed[i] == 0 && flowerbed[i - 1] == 0) || (i == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0))
    //     {
    //         flowerbed[i] = 1;
    //         n--;
    //     }
    //     else if((i != 0 && i != size - 1) && flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0)
    //     {
    //         flowerbed[i] = 1;
    //         n--;
    //     }
    // }

    //////////////////  METHOD 2
    // flowerbed.insert(flowerbed.begin(), 0);
    // flowerbed.insert(flowerbed.end(), 0);

    // for(int i = 1; i < flowerbed.size() - 1; i++)
    // {
    //     if(flowerbed[i - 1] == 0 && flowerbed[i] == 0 && flowerbed[i + 1] == 0)
    //     {
    //         flowerbed[i] = 1;
    //         n--;
    //     }
    // }

    return n <= 0;
}