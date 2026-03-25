#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;
    int** ptr2 = &ptr;

    cout << "a = " << a << endl;        //Value of a
    cout << "&a = " << &a << endl;      //Address of a
    cout << "ptr = " << ptr << endl;    //Address of a which is stored in ptr
    cout << "ptr2 = " << ptr2 << endl;  //Address of ptr which is stored in ptr2

    cout << "*(&a) = " << *(&a) << endl;    //value which is stored at &a address i.e a = 10
    cout << "*(ptr) = " << *(ptr) << endl;  //value which is stored at the address stored in ptr i.e.value of a 
    cout << "*(ptr2) = " << *(ptr2) << endl; //value which is stored at the address stored in ptr2 i.e.value of ptr i.e. address of a
    cout << "**(ptr2) = " << **(ptr2) << endl; //value of a i.e 10



    //Null pointer
    int* ptr3 = NULL;
    cout << "ptr3 = " << ptr3 << endl;
    cout << "*ptr3 = " << *ptr3 << endl;
 

    return 0;
}