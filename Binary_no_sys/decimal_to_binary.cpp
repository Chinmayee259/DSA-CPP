
#include <iostream>
using namespace std;

void decimal_to_binary(int n)
{
    int ans = 0;
    int pow=1;
    while(n!= 0)
    {
        
        int c = n % 2;
        n = n/2;
        ans = c * pow + ans;
        pow *= 10;
    }
    cout << ans;
}

int main()
{
    int n;
    cout << "Enter any decimal number : ";
    cin >> n;
    decimal_to_binary(n);
    return 0;
}