#include <iostream>
using namespace std;
void prime(int n )
{
    for(int i = 2;i<n;i++)
    {
        if(n%i == 0)
        {
            cout<<"Entered number is not prime";
            return;
        }
    }
    cout<<"Entered number is a prime number";
}



int main() {
int n ;
cout<<"enter the number ";
cin>>n;
prime(n);
return 0;
}