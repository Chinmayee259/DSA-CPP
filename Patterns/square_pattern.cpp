#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows you want for square pattern : ";
    cin>>n;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << j+1;  //cout << "*"   
        }
        cout << endl;
    }
    return 0;
}



// int main(){
//     int n;
//     cout << "Enter the number of rows you want for square pattern : ";
//     cin>>n;
    
//     for(int i = 0; i < n; i++){
//         char c = 'A';
//         for(int j = 0; j < n; j++){
//             cout << c;
//             c = c + 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }


// int main(){
//     int n;
//     cout << "Enter the number of rows you want for square pattern : ";
//     cin>>n;
//     int p = 1;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//             cout << p++;
//         }
//         cout << endl;
//     }
//     return 0;
// }
