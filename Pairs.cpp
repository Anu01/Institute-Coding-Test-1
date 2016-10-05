#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cmath>


using namespace std;

int main(void){
	
	int n,k;
	cin >> n >> k;
	
	vector<int> vec(n);
	
	for(int i = 0; i < n; ++i)
		cin >> vec[i];
	
	int count = 0;
	int t = 1, del;
	sort(vec.begin(), vec.end());
	
	for(int i = 0; i < n; ++i){
	
		for(int j = t; j < n; ++j){    
		// next j starts from t = previous j, bcz for next element, difference k will be after that j
			del = vec[j] - vec[i];
			if(del == k){
				count++;
				t = j;
				break;
			}
			else if (del > k)
				break;	
		}
		
	}
	
	cout << count << endl;
	
	
	return 0;
}
