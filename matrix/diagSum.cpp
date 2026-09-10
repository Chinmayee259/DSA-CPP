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
    vector<vector<int>>mat = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}};
    int n = 4;
    cout << maxRowsum(mat, n);

    return 0;
}