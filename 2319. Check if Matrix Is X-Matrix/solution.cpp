
bool checkXMatrix(vector<vector<int>>& grid) {

    int n = grid.size();
    
    int a = 0, b = n - 1;

    bool isX = false;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(((j == a || j == b) && grid[i][j] > 0) || (j != a && j != b && grid[i][j] == 0))
            {
                isX = true;
                // cout << "yes ";
            }
            else
            {
                isX = false;
                // cout << "no ";
                return false;
            }
            
            // cout << grid[i][j] <<" ";
        }
        a++;
        b--;
        // cout << endl;
    }

    return true;
    
}