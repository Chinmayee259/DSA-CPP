// Sum and product of all the numbers in an array
#include <iostream>
using namespace std;

void Sum_Product(int arr[] , int sz)
{
    int sum = 0  , product = 1; 
    for(int i = 0; i<sz ; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }
    cout<<"The sum of all the numbers in an array is : "<<sum<<endl;
    cout<<"The product of all the numbers in an array is : "<<product<<endl;
    
}
int main() {
    int arr[] = {2,6,3,8,9,3,0};
    int sz  = 7;
    Sum_Product(arr , sz);
    return 0;
}