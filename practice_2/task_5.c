#include <stdio.h>

union Data {
    int i; 
    float f;
    char s[100]; 
};

int main(){
    int num;
    printf("Введите тип данных(1 - int, 2 - float, 3 - string): ");
    scanf("%d", &count);
    struct Employee employee[count];

    for (int i = 0; i < count; i++) {
        printf("Введите  имя, должность и зарплату сотрудника № %d: \n", i+1);
        scanf("%s %s %f", employee[i].name, employee[i].position, &employee[i].salary);
    }

    for (int i = 0; i < count; i++) {
        printf("\nName: %s\nPosition: %s\nSalary: %.2f\n", employee[i].name, employee[i].position, employee[i].salary);
    }
    return 0;
}
