#include<iostream>
#include<vector>
using namespace std;

//3rd approach with TC = O(n) and SC = O(1)
vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        //vector<int> prefix(n,1);
        //vector<int> suffix(n,1);

        //prefix
        for(int i=1; i<n; i++){
            ans[i] = ans[i-1] * nums[i-1];
        }

        //suffix
        int suffix = 1;
        for(int i=n-2; i>=0; i--){
            suffix *= nums[i+1];
            ans[i] *= suffix;
        }
        return ans;
    }
    
//2nd approach with TC = O(n) and SC = O(n)
// vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans(n,1);
//         vector<int> prefix(n,1);
//         vector<int> suffix(n,1);

//         //prefix
//         for(int i=1; i<n; i++){
//             prefix[i] = prefix[i-1] * nums[i-1];
//         }

//         //suffix
//         for(int i=n-2; i>=0; i--){
//             suffix[i] = suffix[i+1] * nums[i+1];
//         }

//         for(int i=0; i<n; i++){
//             ans[i] = prefix[i] * suffix[i];
//         }
//         return ans;
//     }


//Brute force approach with time complexity O(n^2)
// vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans(n,1);   //This line creates a vector named ans with: n elements, and each element initialized to 1.

//         for(int i =0; i<n; i++){
//             int prod = 1;
//             for(int j=0; j<n; j++){
//                 if(i != j){
//                     ans[i] *= nums[j];
//                 }
//             }
//         }
//         return ans;
//     }

int main(){
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result;
    result = productExceptSelf(nums);
    for(int i : result){
        cout << i << endl;
    }
    return 0;
}