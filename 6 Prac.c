#include <stdio.h>
#include <math.h>

double A(int B, int C, int D, int E) {
    double F = sqrt(pow(D - B, 2) + pow(E - C, 2));
    return F;
}

int main() {
    int G, H, I, J;
    printf("Enter the coordinates of the vector's start (x1 y1): ");
    scanf("%d %d", &G, &H);
    printf("Enter the coordinates of the vector's end (x2 y2): ");
    scanf("%d %d", &I, &J);

    double K = A(G, H, I, J);
    printf("The length of the vector from (%d, %d) to (%d, %d) is: %.6f\n", G, H, I, J, K);

    return 0;
}
