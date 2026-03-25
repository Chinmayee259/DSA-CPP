//  Reverse the vector
#include<iostream>
#include<vector>
using namespace std;

void Reverse(vector<int>&vec)
{
    int sz = vec.size();
    int s = sz - 1;
    for(int i = 0 ; i<sz ; i++)
    {
        if(i == (sz/2))
        {
            break;
        }
        int temp = vec[i];  //swap(vec[i] , vec[s])
        vec[i] = vec[s];
        vec[s] = temp;
        s--;
    }
}

int main()
{
    vector<int>vec = {1,8,6,3,1,4,3};
    cout << "Vector before reverse : ";
    for(int val: vec)
    {
        cout << val <<" ";
    }
    cout << endl;
    Reverse(vec);
    cout << "Vector after reverse : ";
    for(int val: vec)
    {
        cout << val <<" ";
    }
    return 0;
}