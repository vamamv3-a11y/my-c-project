#include "../include/lab4(add).h"
#include <stdio.h>

#define YES 1
#define NO 0
#define MAXLINE 1000

static void process_line(char buffer[], FILE *fout)
{
    char c;
    int flag = NO, found = NO;
    int i = 0, pos = 0, numb_word = 0, start = 0, j;

    do
    {
        c = buffer[i];
        if (c == ' ' || c == '.' || c == ',' || c == '\n' || c == '\0')
        {
            if (flag == YES)
            {
                if (found == NO)
                    for (j = start; j < i; j++)
                        buffer[pos++] = buffer[j];
                else
                {
                    for (j = start; j < i; j++)
                        fputc(buffer[j], fout);
                    fputc('\n', fout);
                }
                flag = NO;
                buffer[pos++] = c;
            }
        }
        else
        {
            if (flag == NO)
            {
                start = i;
                numb_word++;
                found = (numb_word % 2 == 0) ? YES : NO;
            }
            flag = YES;
        }
        i++;
    }
    while (c != '\0');
    buffer[pos] = '\0';
}

void run_lab4_add(void)
{
    char line[MAXLINE];
    FILE *fout = fopen("output.txt", "w");
    if (fout == NULL) { printf("WRONG\n"); return; }
    printf("Введите строку: ");
    fgets(line, MAXLINE, stdin);
    process_line(line, fout);
    puts(line);
    fclose(fout);
}




