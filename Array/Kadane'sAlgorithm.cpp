#include<iostream>
#include <climits>
using namespace std;

// Print all possible subarrays
void printSubarrays(int *arr, int n){
    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            for(int i = start; i <= end; i++){
                cout << arr[i];
            }
            cout << " , ";
        }
        cout << endl;
    }
}

// Print all possible subarray sum
void printSubarraysum(int *arr, int n){
    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            int curSum = 0;
            for(int i = start; i <= end; i++){
                curSum += arr[i];
            }
            cout << currSum << " , ";
        }
        cout << endl;
    }
}


// Print maximum subarray sum (Brute Force)
void maxSubarraysum1(int *arr, int n){
    int maxSum = INT_MIN;

    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            int curSum = 0;
            for(int i = start; i <= end; i++){
                curSum += arr[i];
            }
            maxSum = max(curSum, maxSum);
        }
    }
    cout << maxSum;
}


// Print maximum subarray sum (Slightly optimised)
void maxSubarraysum2(int *arr, int n){
    int maxSum = INT_MIN;

    for(int start = 0; start < n; start++){
        int curSum = 0;
        for(int end = start; end < n; end++){
            curSum += arr[end];
            maxSum = max(curSum, maxSum);
        }
    }
    cout << maxSum;
}

// Kadanes algorithm . as soon as curSum becomes -ve reinitialize to 0
void maxSubarraysum3(int *arr, int n)
{
    int currSum = 0, maxSum = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum , maxSum);
        if(currSum < 0)
        {
            currSum = 0;
        }
    }
    cout << maxSum;
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};

    int n = sizeof(arr)/sizeof(int);
    
    printSubarrays(arr,n);
    cout << endl;
    
    printSubarraysum(arr, n);
    cout << endl;
    
    maxSubarraysum1(arr,n);
    cout << endl;

    maxSubarraysum2(arr,n);
    cout << endl;

    maxSubarraysum3(arr,n);
    cout << endl;
    
    return 0;


}