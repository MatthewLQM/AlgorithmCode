#include <stdio.h>
int comp(int a[], int b[]) // 比较函数
{
    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) return 1;
        if (a[i] < b[i]) return -1;
    }return 0;
}

int main()
{
    int si, rom[2] = {17, 29}, a[3] = {0}, b[3] = {0}, dif[3] = {0};
    scanf("%d.%d.%d", a, a+1, a+2);
    scanf("%d.%d.%d", b, b+1, b+2);

    if ((si = comp(b, a)) != 0) // 比较两个钱数大小
        for (int i = 0; i < 3; i++) dif[i] = si*b[i] - si*a[i]; // 大的减去小的
    else
        dif[0] = dif[1] = dif[2] = 0; // 相等时全赋值为0

    for (int i = 2; i > 0; i--)
        if (dif[i] < 0) {dif[i] += rom[i-1], dif[i-1] -= 1;} // 对于低位，如果为负数则要借位

    printf("%d.%d.%d", si*dif[0], dif[1], dif[2]); // 输出结果

    return 0;
}