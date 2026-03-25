#include<iostream>
using namespace std;

void fibona(int n)
{
    int t1 = 0;
    int t2 = 1;
    cout << t1;
    cout << t2;
    int temp = 0;
    while(temp <= n)
    {
       temp = t1+t2;
       if(temp > n)
       {
           break;
       }
       cout << temp;
        t1 = t2;
        t2 = temp;
        
    }
}

int main()
{
    int n;
    cout <<"Enter a number : ";
    cin >> n;
    fibona(n);
    return 0;
}