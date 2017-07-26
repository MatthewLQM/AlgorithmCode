#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(void){
	double r1, p1, r2, p2;
	double a1, b1, a2, b2, a3, b3;
	cin >> r1 >> p1 >> r2 >> p2;
	a1 = r1 * cos(p1);
	b1 = r1 * sin(p1);
	a2 = r2 * cos(p2);
	b2 = r2 * sin(p2);
	a3 = a1 * a2 - b1 * b2;
	b3 = a1 * b2 + a2 * b1;
	if(fabs(a3) < 0.01)a3 = 0;
	if(fabs(b3) < 0.01)b3 = 0;
	if(b3 == 0 && a3 == 0)printf("0");
	else if(b3 < 0)printf("%.2lf%.2lfi", a3, b3);
	else printf("%.2lf+%.2lfi", a3, b3);
	return 0;
}
