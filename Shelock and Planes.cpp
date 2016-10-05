#include <iostream>
#include <cmath>

using namespace std;

struct point{
	double x;
	double y;
	double z;
};

point cross(point a, point b, point c){
	point a1 = {a.x - b.x, a.y - b.y, a.z - b.z};
	point a2 = {c.x - b.x, c.y - b.y, c.z - b.z};
	
	point k = {a1.y*a2.z - a1.z*a2.y, a1.z*a2.x - a1.x*a2.z, a1.x*a2.y - a1.y*a2.x};
	return k;
}


int main(){
	
	int test_cases;
	cin >> test_cases;
    
    point p[4];
	
	for(int i = 0; i < test_cases; ++i){
		
		for(int j = 0; j < 4; ++j)
			cin >> p[j].x >> p[j].y >> p[j].z;

		
		point crossp1 = cross(p[0], p[1], p[2]);
        
        double d = crossp1.x*p[0].x + crossp1.y*p[0].y + crossp1.z*p[0].z ;
        
        double sum = crossp1.x*p[3].x + crossp1.y*p[3].y + crossp1.z*p[3].z; 
        if(d == sum)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
        
	}

    return 0;
}
