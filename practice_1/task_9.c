
// Время до контакта с Землей
// Передача сообщения на Землю занимает T секунд (double). Напишите программу, 
// которая принимает T и выводит время в минутах и секундах (например, 75.5 секунд → 1 минута 15.5 секунд).

#include <stdio.h>
#include <math.h> 

const char* get_minutes_declension(int number) {
    number = number % 100;
    if (number >= 11 && number <= 14) return "минут";
    number = number % 10;
    if (number == 1) return "минута";
    if (number >= 2 && number <= 4) return "минуты";
    return "минут";
}

const char* get_seconds_declension(int number) {
    number = number % 100;
    if (number >= 11 && number <= 14) return "секунд";
    number = number % 10;
    if (number == 1) return "секунда";
    if (number >= 2 && number <= 4) return "секунды";
    return "секунд";
}

int main() {
    double T;
    printf("Введите время, за которое сообщение дойдет до Земли (в секундах): ");
    scanf("%lf", &T);

    if (T < 60) { 
        printf("%lf %s\n", T, get_seconds_declension((int)T));
    } else {
        int minutes = (int)(T / 60);  // Полные минуты
        double seconds = fmod(T, 60); // Остаток секунд

        printf("%d %s и %lf %s\n", minutes, get_minutes_declension(minutes), seconds, get_seconds_declension((int)seconds));
    }

    return 0;
}
// Снова компилируем с -lm
// не бейте, я с gpt взял склонение. тк не смог придумать как это сделать сам, зато теперь знаю логику как это делать