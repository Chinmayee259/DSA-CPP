#include <iostream>
using namespace std;

void prime(int n)
{
    for(int i = 2;i<n;i++)
    {
        if(n%i == 0)
        {
            return;
        }
    }
    cout<<n;
}

void print(int N)
{  
    for(int i = 2; i<=N ; i++){
        prime(i);
    }
      
}



int main() {
int N ;
cout<<"enter the number ";
cin>>N;
print(N);

return 0;
}
