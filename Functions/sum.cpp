#include <iostream>
#include<vector>
using namespace std;


vector<int> Sum(int T, vector<int>& a){
    vector<int> sum_a;
    for(int i=0; i < T; i++){
        int num = a[i];
        int sum = 0;
        while(num != 0){
            int s = num % 10;
            int c = num / 10;
            num = c;
            sum += s;
        }
        sum_a.push_back(sum);
    }
    return sum_a;
}

int main() {
	int T;
	cout << "Enter the number of test cases" << endl;
	cin >> T;
	vector<int> vec;
	cout<<"Enter the Test cases";
	for(int i = 0; i < T; i++){
	    int x;
	    cin >> x;
	    vec.push_back(x);
	}
	
	vector<int> result = Sum(T, vec);
	for(int i = 0; i < T; i++){
	    cout<< result[i];
	}
	return 0;

}
