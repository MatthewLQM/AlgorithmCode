#include <iostream>  
#include <cstdio>
using namespace std;  
// 按照进制，转换一个字符串到一个十进制数字
long long int getNum(char *n1,int radix){  
    int i=0;  
    long long int res=0;  
    while(n1[i]){  
        int dig;  
        if(n1[i] >= '0' && n1[i] <= '9'){  
            dig = n1[i] - '0';  
        } 
        else {  
            dig = n1[i] - 'a' + 10;  
        }  
        res = res * radix + dig;  
        i++;  
    }  
    return res;  
}  
// 用二分法寻找另外一个数的进制
int getRadix(char *n1,char *n2,int radix){  
    long long int num1 = getNum(n1,radix);  
    long long int num2;  
    
    int i = 0;  
    long long int min = 1;  
    while(n2[i]){  
        int dig;  
        if(n2[i] >= '0' && n2[i] <= '9') {  
            dig = n2[i]- '0';  
        }
        else {  
            dig = n2[i]- 'a' + 10;  
        }  
        if(dig > min)  
        min = dig;  
        i++;  
    } 
    min++;  
    long long int left = min;  
    long long int right = num1;  
    num2 = getNum(n2,left);  
    if(num2 == num1)  
        return left;  
    if(i <= 1)  
        return -1;  
    while(left <= right){  
    long long int mid = (left + right) / 2;  
    num2 = getNum(n2,mid);  
    if(num2 == num1)  
        return mid;  
    else if(num2 < 0 || num2 > num1)  
        right = mid - 1;  
    else  
        left=mid+1;  
    }    
    return -1;  
}  
  
int main(){  
    char n1[11], n2[11];  
    int tag, radix;  
    scanf("%s%s",n1,n2);  
    cin >> tag >> radix;  
    int r;  
    if(tag==1)  
        r=getRadix(n1, n2, radix);  
    else  
        r=getRadix(n2, n1, radix);  
    if(r==-1)  
        cout<<"Impossible";  
    else  
        cout<<r;  
    return 0;  
}  