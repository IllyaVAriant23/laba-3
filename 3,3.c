#include <stdio.h>
int main() { 
    int luboi;
    printf("Введіть номер  серії (1-10) першого  сезону серіала 'The Alienist': ");
    scanf("%d", &luboi);
    switch (luboi) {
        case 1:
            printf("Серія 1: The Boy on the Bridge\n");
            printf("Дата прем'єрного  показу: 22 січня 2018 року\n");
            break;
        case 2:
            printf("Серія 2: A Fruitful Partnership\n");
            printf("Дата  прем'єрного показу: 29  січня 2018 року\n");
            break;
        case 3:
            printf("Серія 3: Silver Smile\n");
            printf("Дата прем'єрного показу: 5 лютого 2018 року\n");
            break;
        case 4:
            printf("Серія 4: These Bloody Thoughts\n");
            printf("Дата прем'єрного показу: 12 лютого  2018 року\n");
            break;
        case 5:
            printf("Серія 5: Hildebrandt’s Starling\n");
            printf("Дата прем'єрного показу: 19 лютого 2018 року\n");
            break;
        case 6:
            printf("Серія 6: Ascension\n");
            printf("Дата прем'єрного показу: 26 лютого 2018 року\n");
            break;
        case 7:
            printf("Серія 7: Many Sainted Men\n");
            printf("Дата прем'єрного показу: 5  березня 2018 року\n");
            break;
        case 8:
            printf("Серія 8: Psychopathia Sexualis\n");
            printf("Дата прем'єрного показу: 12 березня 2018 року\n");
            break;
        case 9:
            printf("Серія 9: Requiem\n");
            printf("Дата прем'єрного показу : 19 березня 2018 року\n");
            break;
        case 10:
            printf("Серія 10: Castle in the Sky\n");
            printf("Дата прем'єрного показу : 26 березня 2018 року\n");
            break;
    default:
            printf("Введено невірний номер серії.\n");
            break;
    }
    return 0;
}
