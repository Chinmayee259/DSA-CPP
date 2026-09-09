#include <iostream>
#include <vector>
using namespace std;

int maxRowsum(vector<vector<int>> &mat, int n){
    int curSum = 0;
    for(int i = 0; i < n; i++){
        curSum += mat[i][i];
    }
    int j = 0;
    for(int i = n-1; i >= 0; i--){
        curSum += mat[i][j];
        j++;
    }
    
    return curSum;
    
}
int main() {
    vector<vector<int>>mat = {{3,4}, {4,6}};
    int n = 2;
    cout << maxRowsum(mat, n);

    return 0;
}