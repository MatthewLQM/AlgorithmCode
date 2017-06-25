#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int comp(const void*a,const void*b)
{
	return *(int*)a-*(int*)b;
}
int main(void){
	int *num;
	int count, p, max = 0;
	int tmp;
	scanf("%d%d", &count, &p);
	num = new int[count];
	for(int i = 0; i < count; i++){
		scanf("%d", &num[i]);
	}
	qsort(num, count, sizeof(int), comp);
	for(int i = 0; max != count && count - i > max; i++){
		for(int j = max + i; j < count; j++){
			if(j == count - 1 || num[j + 1] > (long long)num[i] * p){
				if(num[j] <= (long long)num[i] * p){
					tmp = j - i + 1;
					max = (tmp > max)?tmp:max;
				}
				break;
			}
		}
	}
	printf("%d", max);
	return 0;
}
