#include <stdio.h>

long long A(int B) {
    long long C[B + 1][2][3];
    
    for (int D = 0; D <= B; D++) {
        for (int E = 0; E < 2; E++) {
            for (int F = 0; F < 3; F++) {
                C[D][E][F] = 0;
            }
        }
    }

    C[1][0][1] = 1;
    C[1][1][1] = 1;
    
    for (int D = 2; D <= B; D++) {
        C[D][0][1] = C[D - 1][1][1] + C[D - 1][1][2];
        C[D][0][2] = C[D - 1][0][1];

        C[D][1][1] = C[D - 1][0][1] + C[D - 1][0][2];
        C[D][1][2] = C[D - 1][1][1];
    }

    long long G = C[B][0][1] + C[B][0][2] + C[B][1][1] + C[B][1][2];
    return G;
}

int main() {
    int H;
    printf("Enter the number of digits: ");
    scanf("%d", &H);

    if (H > 30) {
        printf("The value of n should be at most 30.\n");
        return 1;
    }

    long long I = A(H);
    printf("The number of %d-digit numbers: %lld\n", H, I);

    return 0;
}
