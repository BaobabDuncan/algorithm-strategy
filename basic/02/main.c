#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main() {
//    printf("!!!");
    srand(time(NULL));
    int data = rand() % 10;
    int i = 1;
    int num = 0;
    while(1){
        scanf("%d", &num);
        if (data > num){
            printf("more big!!\n");
        } else if (data < num){
            printf("more small!!\n");
        } else {
            printf("OK!!\n");
            break;
        }
        i++;
    }


    return 0;
}