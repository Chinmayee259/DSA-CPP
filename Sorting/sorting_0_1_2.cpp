#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Optimal Approach 1
// void sortArray(vector<int>& vec, int n){
//     int count0 = 0, count1 = 0, count2 = 0;

//     // TC = O(n)
//     for(int i = 0; i < n; i++){
//         if(vec[i] == 0) count0++;
//         else if(vec[i] == 1) count1++;
//         else count2++;

//     }


//     int idx = 0;

//     // TC = O(n)
//     for(int i = 0; i < n; i++){
//         if(i < count0) vec[i] = 0;
    //     else if(i < count0 + count1) vec[i] = 1;
    //     else vec[i] = 2;
    
// }

void sortArray(vector<int>& vec, int n){

}


void printArray(vector<int>& vec, int n){
    for(int i = 0; i < n; i++){
        cout << vec[i] << " ";
    }
}

int main(){

    vector<int> vec = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    // sort(vec.begin(), vec.end());  //Brute force approach

    int n = vec.size();

    cout << "Array before sorting : " << endl;
    printArray(vec, n);
    sortArray(vec, n);
    cout << endl;
    cout << "Array after sorting : "<< endl;
    printArray(vec, n);
    return 0;
}