#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE 1

int IsTrianle(int a, int b, int c)
{
    short test1 = (c > a + c);
    short test2 = (a > b + c);
    short test3 = (b > a + c);

    if (!test1 && !test2 && !test3)
    {
        return TRUE;
    }

    else
    {
        return FALSE;
    }
}

int main(void)
{
    int x, y, z;
    x = 4;
    y = 3;
    z = 78;
    printf("%i", (y > x + z));
}