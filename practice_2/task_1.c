#include <stdio.h>

struct Student {
    char Name[20]; 
    int Age;
    float GPA;
};

int nain(){
    int count;
    printf("Введите количество студентов: ");
    scanf("%d", &count);
    // struct Student student[count];

    for (int i = 0; i < count; i++) {
        struct Student student;
        scanf("%s %d %f", student.Name, student.Age, student.GPA);
        printf("Name: %s\nAge: %d\nGPA: %lf\n");
    }
    

