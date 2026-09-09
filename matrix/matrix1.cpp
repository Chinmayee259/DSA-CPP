#include <iostream>
#include <vector>
using namespace std;

int maxRowsum(vector<vector<int>> &mat, int n, int m){
    int maxSum = 0;
    int curSum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            curSum += mat[i][j];
        }
        if(curSum > maxSum){
            maxSum =  curSum;
        }
        curSum = 0;
        
    }
    return maxSum;
    
}
int main() {
    vector<vector<int>>mat = {{3,4,1}, {4,6,0}};
    int n = 2;
    int m = 3;
    cout << maxRowsum(mat, n, m);

    return 0;
}