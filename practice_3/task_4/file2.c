#include <stdio.h>

extern int global_var;  // Объявляем глобальную переменную из file1.c


void print_from_file2() {
    printf("file2.c -> global_var = %d\n", global_var);
    //printf("file2.c -> static_var = %d\n", static_var); // Должна быть ошибка компиляции
}