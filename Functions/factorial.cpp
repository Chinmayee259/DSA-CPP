//Factorial of n
#include<iostream>
using namespace std;

long long Fact(int n)
{
    long long fact = 1;     //instead or int we wrote long long as int cannot store out of range number. Still with long long it can store factorial for upto 20
    if (n == 0 || n == 1)
    {
        return fact;
    }

    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if (n < 0){
        cout << "Factorial cannot be calculated"<<endl;
    }
    else{
        cout << "The factorial of " << n << " is "<< Fact(n) <<endl;  
    }
    return 0;
}