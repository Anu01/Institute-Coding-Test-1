#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cstdio>


using namespace std;

int main(void){
	
	int n;
	cin >> n;
	
	vector<int> vec(n);    // to define a vector of length n

	for(int i =0; i < n; ++i )
		cin >> vec[i];
	
	sort(vec.begin(), vec.end());    // to sort algorithm in non-decreasing order. add algorithm library to use it.
	
	for(int j = 0; j < n; j = j + 2){
		if(vec[j] != vec[j+1]){
			 	printf("%d ", vec[j]);    // printf is fast than cout
			 	break;
		}
	}
	
	return 0;
}
