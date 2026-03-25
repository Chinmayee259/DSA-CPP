#include <iostream>
using namespace std;

int main(){

    int arr[] = {1, 2, 4, 6, 8};

    cout << " arr = " << arr << endl;
    cout << " *arr = " << *arr << endl;

    int a = 10;
    int b = 9;
    int* ptr = &a;
    cout << "ptr = " << ptr <<endl;
    ptr = &b;
    cout << "ptr = " << ptr <<endl;


    // arr = &a;  //Error as array pointer is a constant pointer unlike ptr
    // cout << "*arr = " << *arr;


    cout << "*arr = " << *arr << endl;
    cout << "*(arr+1) = " << *(arr+1) << endl;
    cout << "*(arr+2) = " << *(arr+2) << endl;
    cout << "*(arr+3) = " << *(arr+3) << endl;
    cout << "*(arr+4) = " << *(arr+4) << endl;

    

    return 0;
}