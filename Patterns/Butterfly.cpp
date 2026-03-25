#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows you want for butterfly pattern : ";
    cin>>n;
    
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= i+1; j++){
            cout << "*";
        }
        for(int j = (n-i-1)*2; j > 0; j--){
            cout << " ";
        }
        for(int j = 1; j <= i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    for(int i = 0; i < n; i++){
        for(int j = n-i; j > 0; j--){
            cout << "*";
        }
        
        for(int j = i * 2; j > 0; j--){
            cout << " ";
        }
        
        for(int j = n-i; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }


    return 0;
    
}
