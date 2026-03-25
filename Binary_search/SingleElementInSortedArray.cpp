#include<iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int>& A) {
        int n = A.size();

        if(n == 1) return A[0];

        int st = 0, end = n-1;
        while(st <= end){
            int mid = st +(end - st)/2;
            if(mid == 0 && A[0] != A[1]) return A[mid];
            if(mid == n-1 && A[n-1] != A[n-2]) return A[mid];
            if(A[mid-1] != A[mid] && A[mid] != A[mid+1]) return A[mid];
            if(mid % 2 == 0){ //L and R of mid are even
                if(A[mid-1] == A[mid]){ //search space is left of mid
                    end = mid - 1;
                }
                else{ //search space is right of mid
                    st = mid + 1;
                }
            }
            else{  //L and R of mid are odd
                if(A[mid-1] == A[mid]){ //search space is right of mid
                    st = mid + 1;
                }
                else{  //search space is left of mid
                    end = mid - 1;
                }
            }
        }
        return -1;
}

int main(){
    vector<int> nums = {1,1,2,3,3,4,4,8,8};
    cout << singleNonDuplicate(nums);   //Output: 2
    return 0;

}