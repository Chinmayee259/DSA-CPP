//Single Number problem Leetcode 136
#include<iostream>
#include<vector>
using namespace std;

int SingleNumber(vector<int>&vec){
    int ans = 0;
    for(int i : vec){
        ans = ans ^ i;
    }
    return ans;
}

int main(){
    vector <int> nums = {1 , 5 , 8 , 2 , 1 , 5 , 8 };
    cout << SingleNumber(nums);
    return 0;
}