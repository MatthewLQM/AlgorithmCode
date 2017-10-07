#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int comp(const void *a, const void *b){
	return *(int *)b - *(int *)a;
}
int main(void){
	int n, m, c, i, j, k;
	int flag, f1, f2, f3, f4;
	cin >> c;
	for(i = sqrt(c); i > 0; i--){
		if(c % i == 0){
			m = c / i; n = i; break;
		}
	}
	int a[c];
	int b[m][n];
	for(i = 0; i < c; i++){
		cin >> a[i];
	}
	qsort(a, c, sizeof(int), comp);
	i = 0; j = 0; flag = 1;
	f1 = n - 1; f2 = m - 1;
	f3 = 0; f4 = 1;
	for(k = 0; k < c; k++){
		b[i][j] = a[k];
		if(flag == 1)j++;
		else if(flag == 2)i++;
		else if(flag == 3)j--;
		else if(flag == 4)i--;
		if(flag == 1 && j == f1){f1--; flag = 2;}
		else if(flag == 2 && i == f2){f2--; flag = 3;}
		else if(flag == 3 && j == f3){f3++; flag = 4;}
		else if(flag == 4 && i == f4){f4++; flag = 1;}
	}
	for(i = 0; i < m; i++){
		cout << b[i][0];
		for(j = 1; j < n; j++)cout << ' ' << b[i][j];
		cout << endl;
	}
	return 0;
}
