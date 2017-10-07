#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int comp(const void * a,const void * b)
{
return *(int * )b - *(int * )a;
}
int main(void){
 	int n, i;
 	cin >> n;
 	int a[n];
 	for(i = 0; i < n; i++){
 		cin >> a[i];
 	}
 	qsort(a, n, sizeof(int), comp);
 	for(i = 0; i < n; i++){
 		if(a[i] > i + 1)continue;
 		break;
 	}
 	cout << i << endl;
 	return 0;
}