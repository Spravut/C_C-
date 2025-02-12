// Определение веса предмета на Луне
// На Луне сила тяжести составляет 1/6 от земной. Напишите программу,
// которая принимает массу объекта (int) и вычисляет его вес на Луне (float).

#include <stdio.h>

int main() {
    int weight;
    printf("Введите массу объекта: ");

    if (scanf("%d", &weight) != 1) {
        printf("Ошибка ввода! Пожалуйста, введите целое число.\n");
        return 1;
    }

    if (weight > 0) {
        float weight_float = (float) weight;
        printf("Масса объекта на луне будет: %.2f кг.", weight_float / 6);
    }
    else 
    {
        printf("Вес должен быть положительным!!!\n");
        return 1;
    }

    return 0;
}