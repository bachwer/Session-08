#include <stdio.h>
int main(){
    int i;
    printf("Enter your number: ");
    scanf("%d", &i);
    int num1[i][i];
    
    for (int u = 0; u < i; u++){
    for(int k = 0; k < i; k++){
      if(u % 2 == 0){
            num1[u][k] = 0;
        }else{
            num1[u][k] = 1;
        }
    }
    }
    
    for (int u = 0; u < i; u++){
    for(int k = 0; k < i; k++){
        printf("%d ", num1[k][u]);
    }
    printf("\n");
    }
    
    return 0;
}
