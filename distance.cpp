#include <iostream>
#include <math.h>

struct point 
{
	double x;
	double y;
	double z;
	
	double distance(struct point end) {
		double a = sqrt(pow(end.x - x, 2) + pow(end.y - y, 2) + pow(end.z -z, 2));
	return a;
	}
	
};

int main() {
	point a1 = {5, 4, 6};
	point b1 = {2, 8, 3};

    std::cout << a1.distance(b1) << std::endl;


return 0;
}
