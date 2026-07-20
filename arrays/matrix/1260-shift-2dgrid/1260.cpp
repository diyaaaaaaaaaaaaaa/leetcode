#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid[0].size();
        int m=grid.size();
        vector<vector<int>>table(m, vector<int>(n));
        if (k==0) return grid;

        while(k){
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(j==n-1 && i==m-1) {
                         table[0][0]=grid[i][j];
                    }  
                    else if (i<m-1 && j==n-1) table[i + 1][0]=grid[i][j];
                    else if (j<n-1 && i<m-1) table[i][j + 1]=grid[i][j];
                    else if (i==m-1 && j<n-1) table[i][j + 1]=grid[i][j];
                }
            }
            grid=table;
            k--;
         }
         return table;
    }
};