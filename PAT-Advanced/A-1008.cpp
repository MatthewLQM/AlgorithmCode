#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;
int main(){
    // 一共运行n次，记录目标和上次的位置以及时间即可
    int n, now = 0, des, total = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> des;
        if(des > now){
            total += (des-now)*6+5;
            now = des;
        }
        else {
            total += (now-des)*4+5;
            now = des;
        }
    }
    cout << total << endl;
    return 0;
}