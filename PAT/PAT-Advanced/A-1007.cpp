#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
int main(){
    //记录总数、输入
    int count, *num, i, j;
    //记录最大值、子串总和、左边界、右边界
    int max, sum, l, r;
    cin >> count;
    num = new int[count];
    for(i = 0; i < count; i++)
        cin >> num[i];
    l = r = max = -1;
    sum = j = 0;
    //遍历输入，如果子串大于 max，那么就存储新的max
    for(int i = 0; i < count; i++){
        sum += num[i];
        if(sum < 0){
            sum = 0;
            j = i+1;
        }
        else {
            if(sum > max){
                max = sum;
                l = j;
                r = i;
            }
            else if(sum == max){
                if(i+j<l+r){
                    l = j;
                    r = i;
                }
            }
        }
    }
    //如果max没有被更新
    if(l == -1){
        max = 0;
        l = 0;
        r = count - 1;
    }
    cout << max << " " << num[l] << ' ' << num[r];
    delete [] num;
    return 0;
}