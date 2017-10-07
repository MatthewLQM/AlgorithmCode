#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(void){
   int n, k, count = 0;
   cin >> n;
   for(int i = 0; i < n; i++){
     cin >> k;
     count += k * 11 * (n - 1);
   }
   cout << count;
}