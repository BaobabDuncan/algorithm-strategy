#include <stdio.h>

int gcd(int x, int y) {
    static int ExecNum = 1;
    printf("execution : %d\n", ExecNum++);
    if (y != 0) {
        printf("x : %d, y : %d\n", x, y);
        return gcd(y, x % y);
    } else {
        return x;
    }
}

int main() {
    printf("Hello, World!\n");
    int a = 4, b = 6, result;
    result = gcd(a, b);
    printf("%d, %d -> %d", a, b, result);

//    if (a > b){
//        num = b;
//    } else {
//        num = a;
//    }
//
//    for (int i = 1; i <= num; i++){
//        if (((a % i) == 0) && ((b % i) == 0)){
//            max = i;
//        }
//    }
//    printf("%d, %d -> %d\n", a, b, max);



    return 0;
}