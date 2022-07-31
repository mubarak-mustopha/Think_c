#include <stdio.h>
#include <stdlib.h>

int RaiseToPow(int base, int expo)
{
    int result = 1;
    while (expo > 0)
    {
        result = result * base;
        expo = expo - 1;
    }
    return result;
}

void PrintExpoResult(int x, int y)
{
    printf("%i to the power of %i is %i\n", x, y, RaiseToPow(x, y));
}

int main(void)
{
    int x, y;
    x = 2;
    y = 3;
    PrintExpoResult(x, y);
    x = 4;
    y = 1;
    PrintExpoResult(x, y);
    x = 9;
    y = 0;
    PrintExpoResult(x, y);
}