//Intersection on arrays
#include<iostream>
using namespace std;

void Intersection(int arr1[] , int arr2[] , int sz1 , int sz2){
    int array[sz2];
    for(int i = 0; i<sz1; i++){
        for(int j = 0; j < sz2; j++){
                if(arr1[i] = arr2[j]){
                    cout << arr1[i];
                }
                
            }
        }
    
}

int main(){
    int array1[] = {1,3,5,2,7,8,3};
    int array2[] = {4,3,7,9,2};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    Intersection(array1 , array2 , size1 , size2);
    return 0;
}