#include <stdio.h>

int main() {
    char character;
    printf("Введите маркировку детали двигателя ракеты: ");
    scanf("%c", &character);
    if (character >= 'A' && character <= 'Z') {
        printf("Действительно, такая деталь существует :) \n");
    } else {
        printf("Такой детали нет :( \n");
    }
    return 0;
}