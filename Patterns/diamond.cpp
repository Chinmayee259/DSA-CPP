// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows you want for diamond pattern : ";
    cin>>n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1 ; j++){
            cout << " ";
        }
        cout << "*";
        
        if(i != 0 ){
            for(int j = 0; j < 2*i-1; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j > ; j--){
            cout << " ";
        }
        cout << "*";
        
        if(i != 1){
            for(int j = 2*i-1; j >= n-1; j--){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
        
    }
    
    return 0;
}