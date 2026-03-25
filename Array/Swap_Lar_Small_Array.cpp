//Swap the smallest and the largest number in an array
#include<iostream>
using namespace std;

void Swap(int arr[] , int sz)
{
    int min = arr[0];
    int max = arr[0];
    int mini , maxi;        //To store the indexes
    for(int i = 0; i<5 ; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
            mini = i;
        }
        
        if(max < arr[i])
        {
            max = arr[i];
            maxi = i;
        }
    }
    
    swap(arr[mini] , arr[maxi]);
}

int main()
{
    int arr[] = {11,88,21,10,2};
    int sz = 5;
    Swap(arr , sz);
    for(int i = 0; i<sz ; i++)
    {
        cout << arr[i] <<" ";
    }
    return 0;
}