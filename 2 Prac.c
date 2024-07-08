#include <stdio.h>


int nsd(int a, int b) {
    if (b == 0)
        return a;
    return nsd(b, a % b);
}


int nsk(int a, int b) {
    return (a * b) / nsd(a, b);
}

int main() {
    int p;
    
    printf("Введіть кількість чисел: ");
    scanf("%d", &p);
    
    if (p < 2 || p > 20) {
        printf("Кількість чисел має бути від 2 до 20.\n");
        return 1;
    }
    
    int numbers[p];
    

    printf("Введіть %d натуральних чисел: ", p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &numbers[i]);
    }
    

    int r = numbers[0];
    for (int i = 1; i < p; i++) {
        r = nsk(r, numbers[i]);
    }
    
    printf("Найменше спільне кратне: %d\n", r);
    
    return 0;
}
