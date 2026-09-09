#include<iostream>
#include<vector>
using namespace std;

int count_Prime(int n){
    vector<bool> Primes(n+1, true);
    int count = 0;
    for(int i = 2; i <= n; i++){
        if(Primes[i]){
            count++;
        }

        for(int j = i * 2; j < n; j = j + i){
            if(j % i == 0){
                Primes[j] = false;
            }
        }

    }
    return count;
}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << count_Prime(n);
    return 0;
}