#include <iostream>
#include <cmath>
using namespace std;
int main(void){
	int n;
	double a, b, max = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a >> b;
		if(a * a + b * b > max * max)
			max = sqrt(a * a + b * b);
	}
	printf("%.2lf\n", max);
	return 0;
}
