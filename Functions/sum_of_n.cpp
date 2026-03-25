//Sum of numbers from 1 to N
#include<iostream>
using namespace std;

int Sum(int n){
    int sum = 0;
    for(int i = 1; i<=n ; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "The sum of number from 1 to " << n << " is : " << Sum(n) << endl;
    return 0;
}