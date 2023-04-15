
vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

    //find out the size of the image
    int n = image.size();
    //follow it row by row
    for(int i = 0; i < n; i++)
    {
        //2 pointer, 1 front, 1 back
        for(int a = 0, b = n - 1; a <= b; a++, b--)
        {
            //if values on 2 index are same
            if(image[i][a] == image[i][b])
            {
                //if 2 pointers on the same index
                if(a == b)
                {
                    flipVal(image[i][a]);
                }
                else
                {
                    image[i][b] = flipVal(image[i][a]);
                }
            }
        }
    }

    return image;
}

int flipVal(int& val)
{
    if(val == 1)
    {
        val = 0;
    }
    else if(val == 0)
    {
        val = 1;
    }
    return val;
}