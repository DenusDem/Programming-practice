#include <stdio.h>

float t(int t1, int t2, int t3) {
    
    float a = (1.0 / t1) + (1.0 / t2) + (1.0 / t3);
    
    return 1.0 / a;
}

int main() {
    int t1, t2, t3;
    
    SetConsoleOutputCP(1251);
    printf("Введіть три натуральних числа (t1, t2, t3): ");
    scanf("%d %d %d", &t1, &t2, &t3);
    

    float time = t(t1, t2, t3);
    
   
    printf("Час, необхідний для з'їдання пирога: %.2f годин\n", time);
    
    return 0;
}
