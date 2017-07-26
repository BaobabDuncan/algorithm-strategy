#include <stdio.h>


int main() {
    printf("Hello, World!\n");
    int i = 0, a = 1, b = 0, new;

    while (i < 24){
        new = a + b;
        printf("%d ", new);
        b = a;
        a = new;
        i++;
    }
    return 0;
}