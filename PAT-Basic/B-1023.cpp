#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(void){
	int a;
	int num[10] = {0};
	for(int i = 0; i < 10; i++){
		scanf("%d", &num[i]);
	}
	for(int i = 1;;i++){
		if(num[i] > 0){
			printf("%d", i);
			num[i]--;
			break;
		}
	}
	for(int i = 0; i < 10; i++){
		for(;num[i] != 0; num[i]--){
			printf("%d", i);
		}
	}
	return 0;
}
