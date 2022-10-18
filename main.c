#include <stdio.h>

int main() {
    int a, b, c, d, e;
    printf("Введите число:\n");
    scanf("%d", &a);
    b = a;
    d = a;
    while ((a >= -77) && (a <= 1)) {
        printf("\nЧисло %d попало в диапозон от -77 до 1\n", a);
        a = 100;
    }
    while ((b < -77) | (b > 1)) {
        printf("Число %d не попало в диапозон от -77 до 1\n\n", d);
        b = 1;
    }
    e = 0;
    printf("Введите число:\n");
    scanf("%d", &c);
    e = c & (1 << 18);
    printf("Значение 18 бита?\n%s",(e != 0? "1" : "0"));
    return 0;
}
