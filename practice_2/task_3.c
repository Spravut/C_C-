#include <stdio.h>

struct Data
{
    int day;
    int month;
    int year;
};


struct Event {
    char event[100]; 
    struct Data data;
    char description[100];
};

int main(){
    int count;
    printf("Введите количество событий: ");
    scanf("%d", &count);
    struct Event event[count];

    for (int i = 0; i < count; i++) {
        printf("Введите название события, дату проведения(через пробел день, месяц, год), описание мероприятия № %d: \n", i+1);
        scanf("%s %d %d %d %s", event[i].event, &event[i].data.day, &event[i].data.month, &event[i].data.year, event[i].description);
    }

    for (int i = 0; i < count; i++) {
        printf("\nEvent: %s\nDate: %d/%d/%d\nDescription: %s\n", event[i].event, event[i].data.day, event[i].data.month, event[i].data.year, event[i].description);
    }
    return 0;
}
