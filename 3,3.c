#include <stdio.h>
int main() { 
    int luboi;
    printf("������ �����  ��� (1-10) �������  ������ ������ 'The Alienist': ");
    scanf("%d", &luboi);
    switch (luboi) {
        case 1:
            printf("���� 1: The Boy on the Bridge\n");
            printf("���� ����'������  ������: 22 ���� 2018 ����\n");
            break;
        case 2:
            printf("���� 2: A Fruitful Partnership\n");
            printf("����  ����'������ ������: 29  ���� 2018 ����\n");
            break;
        case 3:
            printf("���� 3: Silver Smile\n");
            printf("���� ����'������ ������: 5 ������ 2018 ����\n");
            break;
        case 4:
            printf("���� 4: These Bloody Thoughts\n");
            printf("���� ����'������ ������: 12 ������  2018 ����\n");
            break;
        case 5:
            printf("���� 5: Hildebrandt�s Starling\n");
            printf("���� ����'������ ������: 19 ������ 2018 ����\n");
            break;
        case 6:
            printf("���� 6: Ascension\n");
            printf("���� ����'������ ������: 26 ������ 2018 ����\n");
            break;
        case 7:
            printf("���� 7: Many Sainted Men\n");
            printf("���� ����'������ ������: 5  ������� 2018 ����\n");
            break;
        case 8:
            printf("���� 8: Psychopathia Sexualis\n");
            printf("���� ����'������ ������: 12 ������� 2018 ����\n");
            break;
        case 9:
            printf("���� 9: Requiem\n");
            printf("���� ����'������ ������ : 19 ������� 2018 ����\n");
            break;
        case 10:
            printf("���� 10: Castle in the Sky\n");
            printf("���� ����'������ ������ : 26 ������� 2018 ����\n");
            break;
    default:
            printf("������� ������� ����� ���.\n");
            break;
    }
    return 0;
}
