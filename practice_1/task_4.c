#include <stdio.h>

int main() {
    int date;
    printf("Введите дату: ");
    scanf("%d", &date);
    if (date >= 20250210) {
        printf("Ваша дата находится в будущем, относительно даты старта миссии\n");
    } else {
        printf("Ваша дата находится до начала старта миссии \n");
    }
    return 0;
}