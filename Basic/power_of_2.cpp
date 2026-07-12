#include<iostream>
using namespace std;

    bool isPowerOfTwo(int n) {
        int c;
        int rem = 0;

        if(n <= 0){
            return false;
        }

         
        while(n != 1){
            c = n % 2;
            rem += c;
            n = n/2;
        }

        if(rem == 0){
            return true;
        }

        else{
            return false;
        }
    }


int main()
{
    int n;
    cout << "Enter any number : ";
    cin >> n;
    cout << isPowerOfTwo(n);
    return 0;
}