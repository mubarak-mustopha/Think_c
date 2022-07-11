#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int year, month, day;
    year = 2022;
    month = 7;
    day = 11;
    printf("American Format:\n");
    printf("%i/%i/%i\n", month, day, year);
    printf("European Format:\n");
    printf("%i.%i.%i\n", day, month, year);
    return (EXIT_SUCCESS);
}
