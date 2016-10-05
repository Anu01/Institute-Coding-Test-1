#include <iostream>
#include <cstring>


using namespace std;


int main(){
	
	int test_cases;
	char segment[50];
	
	cin >> test_cases;
	
	for(int i = 0; i < test_cases; ++i){
		cin >> segment;
		int length = strlen(segment);
		cout << length;
		for(int j = 0; j < length; ++j){
			if(segment[j] == 'D'){
				cout << "You shall not pass!" << endl;
				break;
			}
			if(j == length - 1){
				cout << "Possible" << endl;
			}
		}
	}
	
    return 0;
}

