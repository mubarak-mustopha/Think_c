#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int hour, minute, second, sec_passed, daily_sec;
    hour = 13;
    minute = 47;
    second = 43;
    daily_sec = 24 * 3600;
    sec_passed = (hour * 3600) + (minute * 60) + second;
    printf("%i seconds have passed since midnigth\n", sec_passed);
    printf("There are %i seconds remaining for today\n", daily_sec - sec_passed);
    printf("%i percent of the day is gone.\n", sec_passed * 100 / daily_sec);
    return (EXIT_SUCCESS);
}
