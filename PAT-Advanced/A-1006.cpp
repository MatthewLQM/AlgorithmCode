#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
//存储时间的结构体
struct Time{
    int h,m,s;
};
//比较哪个时间比较早
int EarlyTime(struct Time a, struct Time b){
    if(a.h < b.h)return 1;
    else if(a.h > b.h)return 2;
    else {
        if(a.m < b.m) return 1;
        else if(a.m > b.m)return 2;
        else {
            if(a.s < b.s)return 1;
            else return 2;
        }
    }
}
int main(){
    int count;
    string unlocker, locker; 
    struct Time E, L;
    cin >> count;
    //初始化第一个信息
    string temp;
    cin >> temp;
    unlocker = locker = temp;
    scanf("%d:%d:%d %d:%d:%d",&E.h,&E.m,&E.s,&L.h,&L.m,&L.s);
    for(int i = 1; i < count; i++){
        //比较之后的信息，早的话，开门的人更改，晚的话，关门的人更改
        struct Time TE, TL;
        cin >> temp;
        scanf("%d:%d:%d %d:%d:%d",&TE.h,&TE.m,&TE.s,&TL.h,&TL.m,&TL.s);
        if(EarlyTime(TE, E) == 1){ unlocker = temp; E = TE; }
        if(EarlyTime(L, TL) == 1){ locker = temp; L = TL; }
    }
    //输出结果
    cout << unlocker << ' ' << locker << endl;
    return 0;
}