// Reverse a number

#include<iostream>
#include<Climits>

using namespace std;

int reverseNum(int n){
    int rev = 0, digit;

    while(n != 0){
        digit = n % 10;

        if(rev > INT_MAX/10 || (rev == INT_MAX/10 && digit > 7)){
            return 0;
        }
        if(rev < INT_MIN/10 || (rev == INT_MIN/10 && digit > 8)){
            return 0;
        }

        rev = (rev * 10) + digit;

        n /= 10;
    }

    return rev;
}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << reverseNum(n);
    return 0;
}


// output
// Enter a number : -23
// -32
// Enter a number : 145
// 541

// Time Complexity : O(logn)