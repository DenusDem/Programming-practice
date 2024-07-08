#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, d, e, f;
    printf("Enter coordinates and radii of two circles (x1 y1 r1 x2 y2 r2): ");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    
    double g = sqrt(pow(d - a, 2) + pow(e - b, 2));
    
    if (g == 0) {
        if (c == f) printf("-1\n");
        else printf("0\n");
    } else if (g > c + f || g < fabs(c - f)) {
        printf("0\n");
    } else if (g == c + f || g == fabs(c - f)) {
        printf("1\n");
    } else {
        printf("2\n");
    }
    
    return 0;
}
