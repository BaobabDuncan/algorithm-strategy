#include <stdio.h>

//
//void output_result() {
//    if(S[F-E] == MAX_VALUME){
//        printf("%d", -1);
//    } else {
//        printf("%d", S[F - E]);
//    }
//}
//
//void initialize_S() {
//    int i;
//    S[0] = 0;
//    for (i = 1; i <= F - E; i++) {
//        S[i] = MAX_VALUME;
//    }
//
//}
//
//void solve() {
//    int i, j;
//    initialize_S();
//    for (i = 0; i < N; i++) {
//        for (j = 0; j <= F - E - W[i]; j++) {
//            if (S[j] + P[i] < S[j + W[i]]) {
//                S[j + W[i]] = S[j] + P[i];
//            }
//        }
//    }
//}
//
//
//
//void input_data() {
//    int i;
//    fscanf(inf, "%d %d\n", &E, &F);
//    fscanf(inf, "%d\n", &N);
//    for (i = 0; i < N; i++) {
//        fscanf(inf, "%d %d\n", &P[i], &W[i]);
//    }
//
//}

int main() {
    int i, j, total_memory = 11, os_memory = 1, N = 3;
    int P[] = {4, 5, 7};
    int W[] = {3, 4, 5};
    int S[total_memory - os_memory];
    S[0] = 0;
    for (i = 1; i <= total_memory - os_memory; i++) {
        S[i] = 50000 * 10000;
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j <= total_memory - os_memory - W[i]; j++) {
//            printf("i = %d j = %d S[j] + P[i] = %d S[j + W[i]] = %d \n", i , j, S[j] + P[i], S[j + W[i]]);
            if (S[j] + P[i] < S[j + W[i]]) {
                S[j + W[i]] = S[j] + P[i];
            }
        }
    }

    for (i = 0; i <= total_memory - os_memory; i++) {
        printf("%d ", S[i]);
    }
//    inf = fopen(INPUT_FILE, "r");
//    fscanf(inf, "%d\n", &T);
//    printf("%d", T);
//
//    for (int i = 0; i < T; i++) {
//        input_data();
//        solve();
//        output_result();
//    }
//
//    fclose(inf);
    return 0;
}
