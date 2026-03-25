#include <iostream>
using namespace std;

int main(){

    int a = 19;
    int* ptr = &a;
    cout <<"ptr = " << ptr << endl; //if ptr = 100

    ptr++; //now ptr = 104
    cout <<"ptr = " << ptr << endl; 

    ptr--; //now ptr = 100
    cout <<"ptr = " << ptr << endl;


    //Pointer1 + Pointer2 is not allowed

    //Subtraction between pointers is allowed it gives difference in no of bytes
    int* ptr1; //100
    int* ptr2 = ptr1 + 2; //+2 means 2 bytes //108

    cout << "ptr1 - ptr2 = " << ptr1 - ptr2 << endl;

    //Comparision between two 2 pointers
    cout << "ptr1 < ptr2 = " << (ptr1 < ptr2) << endl;
    cout << "ptr1 > ptr2 = " << (ptr1 > ptr2) << endl;
    return 0;
}