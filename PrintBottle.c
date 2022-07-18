#include <stdio.h>
#include <stdlib.h>

void PrintVerse(int NumBottles)
{
    if (NumBottles > 0)
    {
        printf("%i bottles of beer on the wall, %i bottles of beer,", NumBottles, NumBottles);
        printf(" ya’ take one down, ya’ pass it around\n");
        PrintVerse(NumBottles - 1);
    }

    else
    {
        printf("No bottles of beer on the wall, no bottles of beer, ya’");

        printf("can’t take one down,ya’ can’t pass it around,");

        printf("cause there are no more bottles of beer on the wall!");
    }
}

int main(void)
{
    int bottle = 3;
    PrintVerse(bottle);
    return EXIT_SUCCESS;
}