#include <iostream>
using namespace std;
int main(void){
	int i, n, temp;
	char str[50][80] = {0};
	while(scanf("%s", str[n]) != -1)n++;
	printf("%s", str[n-1]);
	for(int i=n-2;i>=0;i--){
		printf(" %s", str[i]);
	}
}
