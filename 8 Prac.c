#include <stdio.h>
#include <string.h>

long long A(int B) {
    if (B <= 1) return 1;
    return B * A(B - 1);
}

int main() {
    char C[15];
    scanf("%s", C);
    int D = strlen(C);
    
    int E[26] = {0};
    
    for (int F = 0; F < D; F++) {
        E[C[F] - 'a']++;
    }
    
    long long G = A(D);
    long long H = 1;
    
    for (int I = 0; I < 26; I++) {
        if (E[I] > 1) {
            H *= A(E[I]);
        }
    }
    
    long long J = G / H;
    printf("%lld\n", J);
    
    return 0;
}
