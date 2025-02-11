#include <stdio.h>

int main() {
    int path_length;
    printf("Введите оставшееся растояние до станции подзарядки: ");
    scanf("%d", &path_length);
    if (path_length <= 500) {
        printf("Вы доберетесь до станции подзарядки :> \n");
    } else {
        printf("Вы не успеете доехать до этой станции т.т \nПридумайте другой способ для подзарядки! \n");
    }
    return 0;
}