#include <stdio.h>
#include <math.h>

int main() {
    double r, f, dif;
    printf("Введите расчетную и фактическую скорости (вещественные значения). Введите значения через пробел: ");
    scanf("%lf %lf", &r, &f);

    dif = f - r;
    double rounded_dif = round(dif * 10) / 10;
    if (rounded_dif < 0) {
        rounded_dif = -rounded_dif;
    }
    if (rounded_dif > 0.1) {
        printf("Орбита нестабильна на %lf м/с :<\n", rounded_dif);
    } else {
        printf("Орбита стабильна, все хорошо :>\n");
    }
    return 0;   
}
// компилируем файл обязательно с флагом -lm