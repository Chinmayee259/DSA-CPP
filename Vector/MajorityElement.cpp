#include<iostream>
#include<vector>
using namespace std;

// *******Moore's voting algorithm *********
int MajorityElement(vector<int>& nums){
    int freq = 0 , ans = 0;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}
//Time Complexity = O(n)

// ******* Using sorting ********
// int MajorityElement(vector<int>& nums){
//     int n = nums.size();
//     sort(nums.begin(),nums.end());
//     int freq = 1 ,  ans = nums[0];
//     for(int i = 1; i < n; i++){
//         if(nums[i] == nums[i-1]){
//             freq++;
//         }
//         else{
//             freq = 1;
//             ans = nums[i];
//         }
//         if(freq > n/2){
//             return ans;
//         }
//     }
//     return ans;
// }
//Time Complexity = O(n logn)


// ******* Brute Force Approach *******
// int MajorityElement(vector<int>& nums){
//     int n = nums.size();
//     for(int i : nums){
//         int freq = 0;
//         for(int e : nums){
//             if(i == e){
//                 freq++;
//             }
//         }
//         if(freq > n/2){
//             return i;
//         }
        
//     }
// }
//Time Complexity = O(n^2)

int main(){
    vector<int> nums = {2,2,1,1,1};
    MajorityElement(nums);
    return 0;
}