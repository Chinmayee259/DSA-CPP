/* LEETCODE Q 50
    Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
Example 1:
    Input: x = 2.00000, n = 10
    Output: 1024.00000
Constraints:
    -100.0 < x < 100.0
    -231 <= n <= 231-1
    n is an integer.
    Either x is not zero or n > 0.
    -104 <= xn <= 104
*/


#include<iostream>
using namespace std;
double myPow(double x, int n) { //Here x = base and n = power
        if (n == 0){
            return 1.0;
        }
        if (x == 0){
            return 0.0;
        }
        if(x == 1){
            return 1.0;
        }
        if(x == -1 && n % 2 == 0){
            return 1.0;
        }
        if(x == -1 && n % 2 != 0){
            return -1.0;
        }

        long binForm = n;

        if(n < 0){
            x = 1/x;
            binForm = -binForm;  //Converting 3^-5 into (1/3)^5
        }

        double ans = 1;

        while(binForm > 0){
            if(binForm  % 2 == 1){  
                ans *= x;
            }
            x *= x;
            binForm /= 2;
        }
        return ans;
    }

int main(){
    cout << myPow(2.0, 5);
    return 0;
}


/*
double myPow(double x, int n) {
    double ans = 1.0;
    long long nn = n;
    if(nn < 0) nn = 1 * n;
    while(nn > 0){
        if(nn % 2 == 1){
        ans = ans * x;
        nn = nn - 1;
        }
        else{
            x = x * x;
            nn = nn / 2;
        }
    }
    if(n < 0) ans = (double)(1.0) / (double)(ans);
    return ans;
}

*/