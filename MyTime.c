#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int hour, minute, second;
    hour = 16;
    minute = 39;
    second = 43;
    printf("%i seconds have passed since midnigth\n", (hour * 3600) + (minute * 60) + second);
    printf("There are %i seconds remaining for today\n", (24 * 3600) - ((hour * 3600) + (minute * 60) + second));
    printf("%i percent of the day is gone.\n", ((hour * 3600) + (minute * 60) + second) * 100 / (24 * 3600));
    return (EXIT_SUCCESS);
}
