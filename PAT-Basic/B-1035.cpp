#include <iostream>
using namespace std;
void ins_stp(int b[], int n, int k)
{
    printf("Insertion Sort\n");
    int i = 0, temp = b[k];

    for (i = k; i > 0; i--)
        if (temp < b[i-1])
            b[i] = b[i-1];
        else break;
    b[i] = temp;
}
void mrg(int a[], int b[], int m, int n)
{
    int i = 0, j = 0, k = 0, c[m+n];
    while (i != m || j != n) {
        if (i == m)          c[k++] = b[j++];
        else if (j == n)     c[k++] = a[i++];
        else if (a[i] > b[j])c[k++] = b[j++];
        else                 c[k++] = a[i++];
    }
    for (i = 0; i < m+n; i++)
        *(a+i) = *(c+i);
}
int factor_two(int a) {return a%2 ? a : factor_two(a/2);}
void mrg_stp(int b[], int n)
{
    printf("Merge Sort\n");
    int i = 0, num = 0, cd = 0, nol[50] = {1};
    for (i = 0; i < n-1; i++, nol[num]++) // 记录所有的升序序列的长度
        if (b[i] > b[i+1])
            num++;
    // 这里的cd指的是前面记录的所有升序序列长度的公约数
    cd = nol[0] / factor_two(nol[0]); // 由于merge产生的序列长度必然为2的倍数，这里提取cd中包含的最大的2的倍数
    for (int i = 0; i < num - 1 && cd > 1; i++)
        if (nol[i]%cd != 0) 
            cd /= 2, i--;
            // 因为要满足整个数列可以切分为等长的（最后一个除外）升序数列，当前步骤的子序列长度必须是所有升序序列长度的约数

    for (i = 0; i+2*cd < n; i += 2*cd) // 按照求得的子列长度，每两项进行合并
        mrg(b+i, b+i+cd, cd, cd);
    if (i+cd < n)
        mrg(b+i, b+i+cd, cd, n-i-cd);
}
int main(void){
	int num, i, j, min;
	int flag = 0;
	cin >> num;
	int a[num], b[num];
	for(i = 0; i < num; i++){
		cin >> a[i];
	}
	for(i = 0; i < num; i++){
		cin >> b[i];
	}
	for(i = 0; i < num; i++){
		if(b[i] > b[i+1])break;
	}
	j = i + 1;
	for(i = j; i < num; i++){
		if(a[i] != b[i]){
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		ins_stp(b, num, j);
	}
	else mrg_stp(b, num);
	printf("%d", b[0]);
    for (int j = 1; j < num; j++) // 输出
        printf(" %d", b[j]);
	return 0;
}