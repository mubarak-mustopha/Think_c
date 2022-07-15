#include <stdio.h>
#include <stdlib.h>

void PrintDateAmerican(int year, int month, int day)
{
    printf("%i/%i/%i\n", year, month, day);
}

void PrintDateEuropean(int year, int month, int day)
{
    printf("%i-%i-%i\n", year, month, day);
}

int main(void)
{
    int Y, M, D;
    Y = 2022;
    M = 7;
    D = 15;
    PrintDateAmerican(Y, M, D);
    PrintDateEuropean(Y, M, D);
    return EXIT_SUCCESS;
}