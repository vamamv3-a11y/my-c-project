#include <stdio.h>
#include "include/lab1.h"
#include "include/lab1(add).h"
#include "include/lab2.h"
#include "include/lab2(add).h"
#include "include/lab3.h"
#include "include/lab3(add).h"
#include "include/lab4.h"
#include "include/lab4(add).h"
#include "include/lab5.h"
#include "include/lab5(add).h"

int main(void)
{
    int choice;
    while (1)
    {
        printf("\n--- Меню ---\n");
        printf("1.  Лаба 1\n");
        printf("2.  Лаба 1 доп\n");
        printf("3.  Лаба 2\n");
        printf("4.  Лаба 2 доп\n");
        printf("5.  Лаба 3\n");
        printf("6.  Лаба 3 доп\n");
        printf("7.  Лаба 4\n");
        printf("8.  Лаба 4 доп\n");
        printf("9.  Лаба 5\n");
        printf("10. Лаба 5 доп\n");
        printf("0.  Выход\n");
        printf("Выбор: ");
        if (scanf("%d", &choice) != 1)
        {
            while (getchar() != '\n');
            continue;
        }
        switch (choice)
        {
            case 1:  run_lab1();      break;
            case 2:  run_lab1_add();  break;
            case 3:  run_lab2();      break;
            case 4:  run_lab2_add();  break;
            case 5:  run_lab3();      break;
            case 6:  run_lab3_add();  break;
            case 7:  run_lab4();      break;
            case 8:  run_lab4_add();  break;
            case 9:  run_lab5();      break;
            case 10: run_lab5_add();  break;
            case 0:  printf("Выход.\n"); return 0;
            default: printf("Неверный выбор.\n");
        }
    }
}
