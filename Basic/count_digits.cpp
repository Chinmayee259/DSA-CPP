#include<iostream>
using namespace std;

countDigits(int n){
    int count = 0;

    while(n != 0){
        n /= 10;
        count++;
    }
    return count;
}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "The number of digits in this number is : " << countDigits(n) << endl;

    return 0;
}


// Output
// Enter a number : 13682
// The number of digits in this number is : 5

// Time Complexity : O(logn)