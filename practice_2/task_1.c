#include <stdio.h>

struct Student {
    char Name[20]; 
    int Age;
    float GPA;
};

int main(){
    int count;
    printf("Введите количество студентов: ");
    scanf("%d", &count);
    struct Student students[count];

    for (int i = 0; i < count; i++) {
        printf("Введите Имя, возраст и средний балл студента %d: \n", i+1);
        scanf("%s %d %f", students[i].Name, &students[i].Age, &students[i].GPA);
    }
    for (int i = 0; i < count; i++) {
        printf("Name: %s\nAge: %d\nGPA: %.1lf\n\n", students[i].Name, students[i].Age, students[i].GPA);
    }
    return 0;
}
