#include <iostream>
using namespace std;
void changeA(int a){   //Pass by value
        a = 20;
}

void changeA1(int* ptr){    //Pass by reference using pointer
        *ptr = 20;
}

void changeA2(int &b){      //Pass by reference using alias
        b = 30;
}
int main(){

    int a = 10;

    cout << "Pass by value" << endl;
    changeA(a);
    cout << "a = " << a << endl;

    cout << "Pass by reference using pointer" << endl;
    changeA1(&a);
    cout << "a = " << a << endl;

    cout << "Pass by reference using alias" << endl;
    changeA2(a);
    cout << "a = " << a << endl;

    return 0;
}