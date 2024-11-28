#include <stdio.h>
int main(){
    int num1[5][5] = {
    {2, 3, 5, 7, 9},
    {1, 3, 4, 8, 2},
    {3, 4, 0, 1, 3},
    {4, 5, 2, 1, 0},
    {1, 2, 8, 9, 8}
};
int i;
    for (int u = 0; u < 5; u++){
        for(int k = 0; k < 5; k++){
            if(u == k ){
                printf("%d ", num1[k][u]);
                i += num1[k][u];
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
 
    printf("total: %d", i);
    return 0;
}
