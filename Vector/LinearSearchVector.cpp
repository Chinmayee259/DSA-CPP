#include <iostream>
#include<vector>
using namespace std;

void LinearSearchVector(vector<int>&vec, int key)
{
    int count = 0;
    int index = 0;
    for(int val : vec)
    {
        
        if(val == key)
        {
             count += 1;
             break;
        }
        index++;
    }
    if(count > 0)
    {
        cout << "Key found at index "<< index << endl;
    }
    else{
        cout << "Key not found"<<endl;
    }
    
    
}
int main() {
    vector<int>vec = {1,7,4,9,2,3};
    int key;
    cout << "Enter a key to search : ";
    cin >> key;
    LinearSearchVector(vec , key);
    return 0;
}