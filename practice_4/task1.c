#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char** strings;
    int n;
    printf("Введите количесвто кораблей: ");
    scanf("%d", &n);
    getchar();

    strings = (char**)malloc(n * sizeof(char*));
    for (int i = 0; i < n; i++) {
        strings[i] = (char*)malloc(50 * sizeof(char));
        fgets(strings[i], 50, stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0';
    }


    for (int i = 0; i < n; i++) {
        if (strncmp(strings[i], "SS", 2) == 0) {
            printf("Первый корабль с названием, начинающимся на SS: %s\n", strings[i]);
            return 1;
        }
    }
    printf("Кораблей с названием, начинающимся на SS не найдено.\n");
    return 1;
}
