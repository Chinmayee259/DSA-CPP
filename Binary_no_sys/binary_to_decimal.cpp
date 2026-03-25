#include<iostream>
using namespace std;

void binary_to_decimal(int n)
{
    int c;
    int ans = 0;
    int pow = 1;
    while(n!=0)
    {
        c = n%10;
        ans += c * pow ;
        pow = pow * 2;
        n = n/10;
    }
    cout << ans;
}

int main(){
    int n;
    cout << "Enter any binary number : ";
    cin >> n;
    binary_to_decimal(n);
    return 0;
}