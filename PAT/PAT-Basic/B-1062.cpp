#include <iostream>
using namespace std;
bool gcd(int i, int j){
	int n = (i > j) ? j : i;
	for(int k = 2; k <= n; k++){
		if(i % k == 0 && j % k == 0)return false;
	} 
	return true;
}
int main(void){
	int n1, n2, m1, m2, k, tmp, flag = 0;
	scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
	if(n1 * m2 > n2 * m1){
		tmp = n1; n1 = n2; n2 = tmp;
		tmp = m1; m1 = m2; m2 = tmp;
	}
	for(int i = 1; i * m2 < k * n2; i++){
		if(i * m1 > k * n1 && gcd(i, k)){
			if(flag == 0){
				flag = 1;
				printf("%d/%d", i, k);
			}
			else 
				printf(" %d/%d", i, k);
		
		}
			
	}
	printf("\n");
	return 0;
}