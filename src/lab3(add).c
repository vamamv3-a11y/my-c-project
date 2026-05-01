#include "../include/lab3(add).h"
#include <stdio.h>

#define YES 1
#define NO 0
#define MAXLINE 1000

static void process_line(char buffer[])
{
    int c, flag = NO, found = NO;
    int start_pos = 0, pos = 0, i = 0, j;

    do
    {
        c = buffer[i];
        if (c == ' ' || c == '.' || c == ',' || c == '\n' || c == '\0')
        {
            if (flag == YES)
            {
                if (found == YES)
                {
                    for (j = start_pos; j < i; j++)
                        buffer[pos++] = buffer[j];
                    buffer[pos++] = ' ';
                }
                flag = NO;
            }
        }
        else
        {
            if (flag == NO)
            {
                start_pos = i;
                if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
                    c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
                    found = YES;
                else
                    found = NO;
            }
            flag = YES;
        }
        i++;
    }
    while (c != '\0');

    if (pos > 0 && buffer[pos-1] == ' ')
        pos--;
    buffer[pos] = '\0';
}

void run_lab3_add(void)
{
    char line[MAXLINE];
    printf("Введите строку: ");
    fgets(line, MAXLINE, stdin);
    process_line(line);
    printf("words starting with vowels = %s\n", line);
}
