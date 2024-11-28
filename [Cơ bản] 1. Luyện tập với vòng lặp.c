#include <stdio.h>

int main() {
    int num[5] = {2,4,6,8,10};
    for(int i = 1; i <= sizeof(num)/sizeof(int); i++){
        printf("%d ", num[sizeof(num)/sizeof(int) - i]);
    }
    return 0;
}
