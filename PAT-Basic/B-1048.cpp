#include <stdio.h>
#include <string.h>

int main()
{
    char key[101] = {0}, num[101] = {0}, num_s[101] = {0}, lst[14] = "0123456789JQK";
    scanf("%s %s", key, num_s);
    int a = (int)strlen(key), b = (int)strlen(num_s);

    if (b < a) { // 对于key更长的情况，在num前面补'0'
        memset(num, '0', a-b);
        b = a;
    }
    strcat(num, num_s); // 之后把num_s接到num后面。

    for (int i = 1; i <= a; i++) { // 加密
        if (i % 2 == 0)
            num[b-i] = (num[b-i] - key[a-i] + 10) % 10;
        if (i % 2 == 1)
            num[b-i] = (key[a-i]-48 + num[b-i]-48) % 13;
    }
    for (int i = 0; i < b; i++)
        printf("%c", (i < b-a ? num[i] : lst[num[i]])); // 输出

    return 0;
}