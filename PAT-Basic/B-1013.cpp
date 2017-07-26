#include <iostream>
#include <cmath>
using namespace std;
bool is(int num){
	if(num == 2)return true;
	int max = sqrt(num) + 1;
	for(int i = 2; i <= max; i++){
		if(num % i == 0)return false;
	}
	return true;
}
int main(void){
	int min, max;
	int flag_10 = 0, count = 0;
	cin >> min >> max;
	for(int i=2;count < max;i++){
		if(is(i)){
			count++;
			if(count >= min){
				flag_10++;
				if(flag_10 == 1){
					cout << i;
				}
				else if(flag_10 == 10){
					cout << ' ' << i << endl;
					flag_10 = 0;
				}
				else cout << ' ' << i;
			}
		}
	}
	return 0;
}
