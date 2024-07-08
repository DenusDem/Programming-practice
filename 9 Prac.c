#include <stdio.h>
#include <limits.h>

int A(int B, int C) {
    int D = C - B + 1;
    int E[D];

    for (int F = 0; F < D; ++F) {
        E[F] = INT_MAX;
    }

    E[0] = 0;
    for (int F = 1; F < D; ++F) {
        E[F] = E[F - 1] + 1;
        if (F % 2 == 0) {
            E[F] = (E[F] < E[F / 2] + 1) ? E[F] : E[F / 2] + 1;
        }
        if (F % 3 == 0) {
            E[F] = (E[F] < E[F / 3] + 1) ? E[F] : E[F / 3] + 1;
        }
    }
    return E[D - 1];
}

int main() {
    int B, C;
    printf("Enter B and C (0 <= B <= C < 2^31): ");
    scanf("%d %d", &B, &C);
    int D = A(B, C);
    printf("Minimum steps from %d to %d: %d\n", B, C, D);
    return 0;
}
