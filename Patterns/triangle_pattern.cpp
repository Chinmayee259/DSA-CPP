#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows you want for triangle pattern : ";
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cout << "*";
            }
            cout<<endl;
        }
        
    
    return 0;
}


// int main(){
//     int n;
//     cout << "Enter the number of rows you want for triangle pattern : ";
//     cin>>n;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             if(i >= j){
//                 cout<< "*";
//             }
//         }
//         cout<<endl;
//     }
// return 0;
// }



// int main(){
//     int n;
//     cout << "Enter the number of rows you want for triangle pattern : ";
//     cin>>n;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < i+1; j++){
//             cout << i+1;
//             }
//             cout<<endl;
//     }
    
//     return 0;
// }



// int main(){
//     int n;
//     cout << "Enter the number of rows you want for triangle pattern : ";
//     cin>>n;
//     char c = 'A';
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < i+1; j++){
//             cout << c;
//             }
//             cout<<endl;
//             c = c + 1;
//     }
    
//     return 0;
// }


// int main(){
//     int n;
//     cout << "Enter the number of rows you want for triangle pattern : ";
//     cin>>n;
//     for(int i = 0; i < n; i++){
//         int t = 1;
//         for(int j = 0; j < i+1; j++){
//             cout << t;
//             t++;
//             }
//             cout<<endl;
//     }
    
//     return 0;
// }


// int main(){
//     int n;
//     cout << "Enter the number of rows you want for triangle pattern : ";
//     cin>>n;
//     for(int i = n-1; i >= 0; i--){
//         for(int j = i; j < n; j++){
//             cout << n-j;
//             }
//             cout<<endl;
//     }
    
//     return 0;
// }


// int main(){
//     int n;
//     cout << "Enter the number of rows you want for triangle pattern : ";
//     cin>>n;
//     int t = 1;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < i+1; j++){
//             cout << t;
//             t++;
//             }
//             cout<<endl;
//     }
    
//     return 0;
// }

// int main(){
//     int n;
//     cout << "Enter the number of rows you want for triangle pattern : ";
//     cin>>n;
//     for(int i = 0; i < n; i++){
//         char ch ='A';
//         for(int j = 0; j < i+1; j++){
//             cout << ch;
//             ch++;
//             }
//             cout<<endl;
//     }
    
//     return 0;
// }


// int main(){
//     int n;
//     cout << "Enter the number of rows you want for triangle pattern : ";
//     cin>>n;
//     char ch ='A';
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < i+1; j++){
//             cout << ch;
//             ch++;
//             }
//             cout<<endl;
//     }
    
//     return 0;
// }

// n = 4
// A
// BC
// DEF
// GHIJ


// int main(){
//     int n;
//     cout << "Enter the number of rows you want for triangle pattern : ";
//     cin>>n;
//     for(int i = 0; i < n; i++){
//         for(int j = i; j >= 0; j--){
//             char ch = 'A';
//             ch = ch + j;
//             cout << ch;
//             }
//             cout<<endl;
//     }
    
//     return 0;
// }

// n = 4
// A
// BA
// CBA
// DCBA



