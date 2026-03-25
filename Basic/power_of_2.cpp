#include<iostream>
using namespace std;

void power(int n)
{
    int c;
    int rem = 0;
    while(n!=1)
    {
        c = n%2;
        rem += c;
        n = n/2;
    }
    if(rem == 0)
    {
        cout<<"yes";
    }
    else
    {
        cout <<"no";
    }
}

int main()
{
    int n;
    cout << "Enter any number : ";
    cin >> n;
    power(n);
    return 0;
}