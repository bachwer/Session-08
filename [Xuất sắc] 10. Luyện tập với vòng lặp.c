// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int num[10]= {1,2,3,2,4,1,4,2,1,4};
    int count;
    int n = 0;
    int num1[10];
    int q,y = 0;
    for(int z = 0; z < 10; z++){
        count = 0;
    for(int i = 0; i < 10; i++){
        if(num[z] == num[i]){
            count++;
    }
        }
        if (count > n || count == n){
            n = count;
           num1[y] = num[z];
           y++;
    }
        }
        for (int i = 0; i < n; i++) {
        q = 0;
        for (int j = 0; j < i; j++) {
            if (num[i] == num[j]) {
                q = 1;
                break;
            }
        }
        if (!q ) {
            printf("%d ", num[i]);
        }
    }
     return 0;  
}
  
