#include <stdio.h>

struct Item {
    char item[20]; 
    int Quantity;
    float Price;
};

int main(){
    int count;
    printf("Введите количество предметов: ");
    scanf("%d", &count);
    struct Item items[count];

    for (int i = 0; i < count; i++) {
        printf("Введите название, количество и цену предмета в одной строке для предмета %d: \n", i+1);
        scanf("%s %d %f", items[i].item, &items[i].Quantity, &items[i].Price);
    }
    for (int i = 0; i < count; i++) {
        printf("Item: %s\nQuantity: %d\nPrice: %.2lf\n\n", items[i].item, items[i].Quantity, items[i].Price);
    }
    return 0;
}