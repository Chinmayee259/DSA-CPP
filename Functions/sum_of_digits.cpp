//Sum of digits
#include<iostream>
using namespace std;

int Sum(int n){
    int sum = 0;
    while(n!=0)
    {
        int s = n % 10;  //56 //6 //6
        int c = (n / 10); //2 //5 //0
        n = c; //2 //5 //0
        sum += s; //2 //7 //13
    }
    return sum; //13
}

int main(){
    int n;
    cout << " Enter any number : ";
    cin >> n;  //256
    cout << Sum(n); //13
    return 0;
}