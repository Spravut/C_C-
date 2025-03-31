#include <stdio.h>

struct Employee {
    char name[100]; 
    char position[100]; 
    float salary;
};

int main(){
    int count;
    printf("Введите количество сотрудников: ");
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
