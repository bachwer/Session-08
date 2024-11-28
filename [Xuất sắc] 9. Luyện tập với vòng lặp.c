#include <stdio.h>
int main(){
    int num1[5][5] = {
    {12, 23, 5, 17, 9},
    {1, 17, 2, 8, 2},
    {3, 4, 17, 23, 3},
    {4, 17, 2, 1, 0},
    {25, 2, 17, 17, 25}
};
int i = 0;
int x = 0;
int s = 0;
int num[24];

    for (int u = 0; u < 5; u++){
        for(int k = 0; k < 5; k++){
               num[i] = num1[k][u];
               i++;
               if(s <= num1[k][u]){
                   s = num1[k][u];
               }
        }
    }
 int r,t = 0;
 int d = 0,c = 0;
 while(t <= s){
     r = 0;
     for(int n = 0; n < 25; n++){
         if(t == num[n]){
             r++;
         }
     }
     if(r > d){
         d = r;
         c = t;
     }
     t++;
 }
    printf("phần tử có số lần xuất hiện nhiều nhất trong mảng đã khai báo: %d", c);
    return 0;
}
