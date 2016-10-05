#include <iostream>
#include <cstring>



using namespace std;

int main(void){
	
	int len_str;
	cin >> len_str;
	
	char str[len_str];
	cin >> str;
	
	int rotation;
	cin >> rotation;
	
	for(int i = 0; i < len_str; ++i){
	
		if(str[i] != 45){
		// keep in mind that str[i] + rotaion can go more than 90 or 122 when str[i] != z.
			if(str[i] >= 65 && str[i] <= 90){
					str[i] = ((str[i] - 65) + rotation)%26 + 65;
			}
			else if(str[i] >= 97 && str[i] <= 122){
				str[i] = ((str[i] - 97) + rotation)%26 + 97;
			}
		}
		
	}
	
	cout << str << endl;
	
	
	return 0;
}
