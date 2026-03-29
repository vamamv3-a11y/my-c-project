#include <stdio.h>
#include "include/lab1.h"
#include "include/lab2.h"
#include "include/lab3.h"

void print_menu(void)
{
    printf("\n=============================\n");
    printf("       Главное меню\n");
    printf("=============================\n");
    printf("1. Лаб. 1 — Вычисление расстояния\n");
    printf("2. Лаб. 2 — Сумма ряда\n");
    printf("3. Лаб. 3 — Слова с гласной\n");
    printf("0. Выход\n");
    printf("Ваш выбор: ");
}

int main(void)
{
    int choice;
    int running = 1;

    while (running)
    {
        print_menu();

        if (scanf("%d", &choice) != 1)
        {
            printf("Ошибка ввода.\n");
            while (getchar() != '\n');
            continue;
        }

        switch (choice)
        {
            case 1:
                printf("\n--- Лаб. 1 ---\n");
                run_lab1();
                break;
            case 2:
                printf("\n--- Лаб. 2 ---\n");
                run_lab2();
                break;
            case 3:
                printf("\n--- Лаб. 3 ---\n");
                run_lab3();
                break;
            case 0:
                printf("Выход.\n");
                running = 0;
                break;
            default:
                printf("Неверный выбор.\n");
                break;
        }
    }

    return 0;
}
