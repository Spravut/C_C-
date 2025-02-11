#include <stdio.h>

int main() {
    double r, f, dif;
    printf("Введите расчетную и фактическую скорости (вещественные значения). Введите значения через пробел: ");
    scanf("%lf %lf", &r, &f);
    dif = f - r;
    if (dif < 0) {
        dif = -dif;
    }
    if (dif > 0.1) {
        printf("Орбита нестабильна на %.2lf м/с :<\n", dif);
    } else {
        printf("Орбита стабильна, все хорошо :>\n");
    }
}