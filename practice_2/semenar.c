#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float height;
};
union Data
{
    int i;
    float f;
    char str[20];
};


int main(){
    // struct Person p1 = {"Zenya", 17};
    // printf("Name: %s, Age: %d, Height: %.1f\n", p1.name, p1.age, p1.height);
    // printf("%d\n", sizeof(p1));
    // printf("%f\n", p1.height);
    union Data data;
    data.i = 52;
    printf("data.i = %d\n", data.i);
    data.f = 23.5;
    printf("data.f = %.1f\n", data.f);
    printf("%d\n", sizeof(data));

    return 0;
}