#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    int i = 4, n = 1, count=0, sum = 0;
    scanf("%d", &i);
    while(n <= 1000){
        if (n % i == 0){
            count++;
            sum += n;
        }
        n++;
    }

    printf("count : %d sum : %d \n", count, sum);

    return 0;
}