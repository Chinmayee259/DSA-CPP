// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

void Reversearray(vector<int>& nums){
    int start = 0;
    int end = nums.size()-1;
    while(start < end){
        swap(nums[start], nums[end]);
        start++;
        end--;
    }
    cout << "[";
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] <<",";
    }
    cout << "]";
    
}
int main() {
    vector<int> nums = {2,5,7,1,8,5};
    Reversearray(nums);

    return 0;
}