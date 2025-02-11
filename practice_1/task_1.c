#include <stdio.h>

int main() {
    int weight;
    printf("Введите вес: ");
    scanf("%d", &weight);
    if (weight >= 60 && weight <= 90) {
        printf("Вы прошли отбор! \n");
    } else {
        printf("Вы не прошли отбор сейчас :<\n В следующий раз обязательно получится! \n");
    }
    return 0;
}