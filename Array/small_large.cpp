// Give the smallest and largest number from the array
#include <iostream>
using namespace std;

void SmallLarge(int arr[], int s){
    int small = arr[0];
    int large = arr[0];
    for(int i = 0; i < s; i++){
        if(small > arr[i]){
            small = arr[i];
        }
        if(large < arr[i]){
            large = arr[i];
        }
    }
    cout << "smallest element in array is : "<< small <<endl;
    cout << "Largest element in array is : "<<large << endl;
}

int main() {
    int arr[5] = {11,88,21,10,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    SmallLarge(arr, size);

    return 0;
}