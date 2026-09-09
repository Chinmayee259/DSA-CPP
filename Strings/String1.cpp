#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3};
    cout << arr << endl;

    char str[] = {'a', 'b', 'c'};
    cout << str << endl;

    char str1[] = {'a', 'b', 'c', '\0'};  // A valid string
    // A valid string contains '\0' which is a null character that end the string
    cout << str << endl;

    char str2[] ="hello"; // String literal
    cout << str2[1] << endl;
    cout << str2[5] << endl;

    // char str3[100];
    // cout << "enter char array : ";
    // cin >> str3;

    // cout << str3 << endl;
    // cin ignores next string after it identifies the space

    // Therefor we use cin.getline(str, len, delimiter(optional))
    char str4[100];
    cout << "enter char array : ";
    cin.getline(str4, 100);
    // this stops reading after the enter or new line

    cout << str4 << endl;

    // char str5[100];
    // cout << "enter char array : ";
    // cin.getline(str5, 100, '$');

    // cout << str5 << endl;


    // for each loop
    char str6[12];
    cout << "enter char array : ";
    cin.getline(str6, 12);

    for(char ch: str6){
        cout << ch <<" ";
    }
    cout << endl;

    // length of string
    char str7[] = "apna college";
    int len = 0;

    for(int i = 0; str7[i] != '\0'; i++){
        len++;
    }

    cout << "length of the str7 is " << len << endl;
    

    return 0;
}