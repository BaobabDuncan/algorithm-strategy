#include "stdio.h"

int main() {
    char key;
    int data;

    scanf("%c", &key);

    if (key == 'a') {
        scanf("%d", &data);
        printf("%d -> %x\n", data, data);
    } else if (key == 'b') {
        scanf("%x", &data);
        printf("%x -> %d\n", data, data);
    } else {
        printf("wrong!!!\n");
    }
    return 0;
}