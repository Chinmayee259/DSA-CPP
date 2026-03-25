// //To find the unique value in an array
// #include<iostream>
// using namespace std;

// int Unique(int arr[] , int sz)
// {
//     for(int i=0; i<sz ; i++)
//     {
//         int count = 0;
//         for(int j=0; j<sz; j++)
//         {
//             if(arr[i] == arr[j])
//             {
//                 count += 1;
//             }
//         }
//         if(count == 1)
//         {
//           return arr[i];
//         }
//     }
//     return -1;
    
// }

// int main()
// {
//     int arr[] = {1,2,3,4,1,2,6,7,3};
//     int sz = 9;
//     cout << Unique(arr , sz);
//     return 0;
// }



// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Unique(vector<int>& nums){
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for(int i = 0; i < n; i++){
        if((i == 0 || nums[i] != nums[i-1]) && (i == n-1 || nums[i] != nums[i+1])){
            cout << nums[i] << " ";
        }
    }
}
int main() {
    // vector<int> nums1 = {2,1,7,1,8,2};
    // vector<int> nums1 = {8,6,3,3,5,8,1,1,3};
    vector<int> nums1 = {1};
    Unique(nums1);

    return 0;
}