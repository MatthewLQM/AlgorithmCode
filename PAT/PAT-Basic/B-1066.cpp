#include <iostream>  
#include <cstdio>
using namespace std;  
int main(){
    int rows, cols, begin, end, res;
    cin >> rows >> cols >> begin >> end >> res;
    int *output = new int[rows*cols];
    for(int i = 0; i < rows*cols; i++){
        int temp;
        cin >> temp;
        if(temp >= begin && temp <= end) temp = res;
        output[i] = temp;
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(j == 0)printf("%03d", output[i*cols+j]);
            else printf(" %03d", output[i*cols+j]);
        }
        printf("\n");
    }
    return 0;
}  
