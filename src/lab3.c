#include "../include/lab3.h"
#include <stdio.h>

#define YES 1
#define NO 0

void run_lab3(void)
{
    int c, flag, cnt;

    cnt = 0;
    flag = NO;

    printf("Введите текст (Ctrl+D для завершения):\n");

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '.' || c == ',' || c == '\n')
        {
            flag = NO;
        }
        else
        {
            if (flag == NO)
            {
                if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
                    c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
                {
                    cnt++;
                }
            }
            flag = YES;
        }
    }

    printf("numbers of word starting with vowels = %d\n", cnt);
}
