// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int colSum(vector<vector<int>> &mat){
    int maxSum = INT_MIN;
    for(int i = 0; i < mat[0].size(); i++){
        int curSum = 0;
        for(int j = 0; j < mat.size(); j++){
            curSum += mat[j][i];
        }
        if(curSum > maxSum){
            maxSum = curSum;
        }
    }
    return maxSum;
    
    
}

int main() {
    vector<vector<int>> mat = {{1,4,2}, {3,8,0}, {5,7,9}};

    cout << "Maximum column sum is : " << colSum(mat);

    return 0;
}