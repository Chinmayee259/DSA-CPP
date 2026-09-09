#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Apna College";
    cout << str << endl;

    str = "hello";
    cout << str << endl;

    // string is dynamic in nature cause it can change during runtime
    //  It is contiguous in nature

    char chArr[] = "apna college";
    // chArr = "hello"; error
    // character array is not dynamic

    string str1 = "hello ";
    string str2 = "world";

    cout << "concatination : " << (str1 + str2) << endl;

    cout<< "comparision : " << (str1 == str2) << endl; 
    cout<< "comparision : " << (str1 < str2) << endl;
    cout<< "comparision : " << (str1 > str2) << endl;  
    cout<< "Length : " << str1.length() << endl;  

    // input string
    string str3;
    // cout << "input the string using cin : ";
    // cin >> str3;
    // cout << str3 << endl;

    cout << "input the string using getline(cin, str) : ";
    getline(cin, str3);
    cout << str3 << endl;

    // can use for loop with an iterator or a for each loop to print the string

    
    

    return 0;
}