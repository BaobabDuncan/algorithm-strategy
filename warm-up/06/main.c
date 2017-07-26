#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    int i, j;
    for (i = 1; i <= 1000; i++){
        for (j = 2; j < i; j++){
            if((i % j) == 0) break;
        }
        if (i == j){
            printf("%d ", i);
        }

    }
    return 0;
}