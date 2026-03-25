// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
void subarrays(vector<int>& nums){
    for(int i = 0; i < nums.size(); i++){
        for(int j = i; j < nums.size(); j++){
            cout << "[";
            for(int k = i; k <= j; k++){
                cout << nums[k] << " ";
            }
            cout << "], ";
        }
        cout << endl;
        
    }
}
int main() {
    vector<int> vec = {1,2,3,4,2,1,3,3};
    subarrays(vec);

    return 0;
}