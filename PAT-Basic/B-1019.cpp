#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main(void){
  int num, numh, numl, flag = 0;
  vector<int> a;
  cin >> num;
  if(num%1111 == 0){
    printf("%04d - %04d = %04d\n", num, num, num-num);
    return 0;
  }
  while(num != 6174 || flag == 0){
    a.clear();
    for(int i = 0; i < 4; i++){
      a.push_back(num%10);
      num /= 10;
    }
    sort(a.begin(), a.end());
    numh = 0; numl = 0;
    for(int i = 0; i < 4; i++){
      numh = numh*10+a[3-i];
      numl = numl*10+a[i];
    }
    num = numh - numl;
    printf("%04d - %04d = %04d\n", numh, numl, num);
    flag = 1;
  }
  return 0;
}