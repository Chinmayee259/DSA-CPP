// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {3, 1, 7, 2, 9, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Array before sorting : " << endl;
    printArray(arr, n);
    selectionSort(arr, n);
    cout << endl;
    cout << "Array after sorting : "<< endl;
    printArray(arr, n);
    return 0;
}