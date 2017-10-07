#include <stdio.h>

int is_prime(int n, int list[])
{
    for (int i = 0; list[i] * list[i] <= n; i++) // list[i] * list[i] <= n时退出循环
        if (n % list[i] == 0) // 验证能否被素数表中的数整除
            return 0;
    return 1;
}

int generate_prime_list(int n, int list[])
{
    int m = 1;
    for (int i = 3; i <= n; i += 2) // 从3开始验证
        if (is_prime(i, list))
            list[m++] = i; // m为已经生成的素数数量
    return m;
}

int main()
{
    int n, size_of_list, prime_couple = 0;
    int prime_list[10000] = {2}; // 预设2为素数表中的第一个数

    scanf("%d", &n);
    size_of_list = generate_prime_list(n, prime_list);

    for (int i = 1; i < size_of_list; i++)
        if (prime_list[i] - prime_list[i - 1] == 2)
            prime_couple++;
    printf("%d", prime_couple);

    return 0;
}