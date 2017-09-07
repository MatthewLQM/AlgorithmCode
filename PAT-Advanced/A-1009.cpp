#include <iostream>  
#include <vector>  
#include <map>  
#include <cmath> 
#include <stdio.h> 
using namespace std;  
// 存储一个节点
struct Node{  
  int exp;  
  double coeff;  
};  
int main(){  
  vector<Node> v1, v2;  
  int K1,K2;  
  Node node;  
  cin >> K1;  
  // v1 和 v2 分别存储两个多项式的项
  for(int i = 0; i < K1; i++){  
    cin >> node.exp >> node.coeff;
    v1.push_back(node);  
  }  
  cin >> K2;  
  for(int i = 0; i < K2; i++){  
    cin >> node.exp >> node.coeff;
    v2.push_back(node); 
  }
  // 用 map 存储多个项， map 是经过排序的，所以可以直接倒序输出。
  map<int,double> m; 
   for(int i = 0; i < K1; i++){  
    for(int j = 0; j < K2; j++){  
      int exp = v1[i].exp + v2[j].exp;  
      double coeff = v1[i].coeff * v2[j].coeff;  
      if(m.count(exp)){  
        m[exp] = m[exp]+coeff;  
      }else{  
        m[exp] = coeff;  
      }  
      if(abs(m[exp] - 0) < 0.00000001){  
        m.erase(exp);  
      }  
    }  
  }  
  cout << m.size();  
  map<int,double>::iterator it = m.end();  
  it--;  
  if(m.size()!=0){  
    while(1){  
      printf(" %d %.1f",it->first,it->second);  
      if(it == m.begin())  
        break;  
      it--;  
    }  
  }   
  return 0;  
}  