// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime){
    int painters = 1, time = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > maxAllowedTime){
            return false;
        }
        if(time + arr[i] <= maxAllowedTime){
            time += arr[i];
        }
        else{
            painters++;
            time = arr[i];
        }
    }
    return painters > m ? false : true;
}

int minTimeToPaint(vector<int> &arr, int n, int m){
    int sum = 0, maxVal = arr[0];
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(arr[i] > maxVal){
            maxVal = arr[i];
        }
    }
    
    int st = maxVal, end = sum, ans = -1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(isPossible(arr, n, m, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }
    return ans;
    
}
int main() {
    vector<int> lengths = {40,30,20,10};
    int n = 4, m = 2;
    cout << minTimeToPaint(lengths, n, m);
    return 0;
    
}