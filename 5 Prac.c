#include <stdio.h>

#define MOD 12345

int A(int B) {
    int C[B + 1][3];

    for (int D = 0; D <= B; D++) {
        for (int E = 0; E < 3; E++) {
            C[D][E] = 0;
        }
    }

    C[1][0] = 1; 
    C[1][1] = 1; 
    C[1][2] = 0; 
    
    for (int D = 2; D <= B; D++) {
        C[D][0] = (C[D - 1][0] + C[D - 1][1] + C[D - 1][2]) % MOD;
        C[D][1] = C[D - 1][0] % MOD;
        C[D][2] = C[D - 1][1] % MOD;
    }

    int F = (C[B][0] + C[B][1] + C[B][2]) % MOD;

    return F;
}

int main() {
    int G;
    printf("Enter the length of the sequences: ");
    scanf("%d", &G);

    if (G <= 1 || G >= 10000) {
        printf("The value of n should be between 1 and 10000.\n");
        return 1;
    }

    int H = A(G);
    printf("The number of %d-length sequences is: %d\n", G, H);

    return 0;
}
