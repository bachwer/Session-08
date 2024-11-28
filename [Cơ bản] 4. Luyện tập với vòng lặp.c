#include <stdio.h>
int main(){
    int num1[5][5] = {
    {2, 3, 5, 7, 9},
    {13, 14, 4, 8, 23},
    {24, 99, 0, 1, 2},
    {25, 5, 2, 1, 4},
    {29, 11, 20, 13, 8}
};
int i = 0;
 for (int u = 0; u < 5; u++){
    for(int k = 0; k < 5; k++){
    if( i < num1[k][u]){
        i = num1[k][u];
    }
    }
    }
    printf("phần tử lớn nhất trong mảng đã khai báo la : %d", i);
    
    return 0;
}
