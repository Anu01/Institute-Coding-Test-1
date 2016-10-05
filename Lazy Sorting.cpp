#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;



int fac(int n){
  return (n == 1 || n == 0) ? 1 : fac(n - 1) * n;
}



int main(){
	
	int n;
	cin >> n;
	
	int p[n];
	for(int i = 0; i < n; ++i)
		cin >> p[i];
		
	double time = 0;
	int t = fac(n);
	
	for(int i = 1; i <= 1000000000; ++i){
		time = time + 1.0*i*pow(t,-i);
	}
	
	cout << fixed;
	cout << setprecision(6) << time << endl;
	

    return 0;
}







