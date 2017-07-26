#include "stdio.h"

int main() {
    int a, b, num, max;
    scanf("%d %d", &a, &b);
    if (a > b) num = a;
    else num = b;

    for (int i = 1; i <= num; i++) {
        if (((a % i) == 0) && ((b % i) == 0)) {
            max = i;
        }
        if ((i == a) || (i == b)) {
            break;
        }
    }
    printf("%d, %d -> %d\n", a, b, max);
    return 0;
}