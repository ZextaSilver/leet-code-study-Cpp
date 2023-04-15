vector<vector<int>> generate(int numRows) {

    vector<vector<int>> pascalTriangle;
    pascalTriangle.resize(numRows);

    for(int i = 0; i < numRows; i++) //在第i个vector里
    {
        for(int j = 0; j < i+1; j++) //循环push back j次数值
        {
            if(j == 0 || j == i)
            {
                pascalTriangle[i].push_back(1);
            }
            else
            {
                pascalTriangle[i].push_back(pascalTriangle[i-1][j] + pascalTriangle[i-1][j-1]);
            }
        }
    }


    return pascalTriangle;
}