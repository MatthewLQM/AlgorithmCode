#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
bool is_na(int n){
	if(n == 2)return true;
	double tmp = sqrt(n) + 1;
	for(int i = 2; i < tmp; i++){
		if(n % i == 0)return false;
	}
	return true;
}
int main(void){
 	char c;
 	int count = 0;
 	int a[2] = {0};
 	while((c = getchar()) != '\n'){
 		if(c >= 'a' && c <= 'z')count += (c - 'a' + 1);
 		else if(c >= 'A' && c <= 'Z')count += (c - 'A' + 1);
 	}
 	while(count > 0){
 		a[count%2]++;
 		count /= 2;
 	}
 	cout << a[0] << ' ' << a[1] << endl;
 	return 0;
}
