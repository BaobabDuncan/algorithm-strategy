#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    int N = 5;
    int DNA[2][5] = {{1, 3, 0, 3, 0},
                     {}};
    int i, j;
    int flag = 0;
    int NotComplete = 1;
    int split_n = -1;

    while (NotComplete) {
        DNA[1 - flag][N - 2] = DNA[flag][N - 1];
        for (i = N - 4; i >= 0; i -= 2) {
            DNA[1 - flag][i] = DNA[flag][i + 1] - DNA[1 - flag][i + 2];
        }
        j = i + 2;
        j = 1 - j;
        DNA[1 - flag][j] = DNA[flag][0] - DNA[1 - flag][1 - j];
        for (i = j + 2; i < N; i += 2) {
            DNA[1 - flag][i] = DNA[flag][i - 1] - DNA[1 - flag][i - 2];
        }
        split_n++;
        flag = 1 - flag;

        for(i = 0; i <N ; i++){
            printf("%2d", DNA[flag][i]);
            if(DNA[flag][i] < 0){
                NotComplete = 0;
            }
        }
        printf("\n");
    }

//    printf("%d ", DNA[0][1]);
//    printf("%d ", DNA[1][1]);
    return 0;
}