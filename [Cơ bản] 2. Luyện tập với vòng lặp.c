#include <stdio.h>

int main() {
    int k;
    int num[5] = {2,4,6,8,10};
    printf("Enter your number: ");
    scanf("%d", &k);
    for(int i = 0; i <= sizeof(num)/sizeof(int); i++){
    if(num[i] == k){
        printf("Vị trí phần tử trong mảng là: %d\n", i + 1);
        return 1;
    }
    }
    printf("Phần tử không tồn tại trong mảng");
    return 0;
}
