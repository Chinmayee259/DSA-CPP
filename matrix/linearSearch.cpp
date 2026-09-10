#include <iostream>
#include <vector>
using namespace std;

pair<int,int> linearSearch(vector<vector<int>> &mat, int key){
    pair<int,int> indices;

    for(int i = 0; i < mat.size(); i++){
        for(int j = 0; j < mat[i].size(); j++){
            if(mat[i][j] == key){
                indices.first = i;
                indices.second = j;
                return indices;
            }
        }
    }
    indices.first = -1;
    indices.second = -1;
    return indices;
    
}

int main() {
    vector<vector<int>> mat = {{1,4,2}, {3,8,0}, {5,7,9}};
    int key;
    cout << "Enter a number to search : ";
    cin >> key;

    pair<int, int> Index = linearSearch(mat, key);

    cout << Index.first << "," << Index.second;

    return 0;
}