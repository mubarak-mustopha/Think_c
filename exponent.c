#include <stdio.h>
#include <stdlib.h>

int RaiseToPow(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    else
    {
        return x * RaiseToPow(x, n - 1);
    }
}

int main(void)
{
    int base, exponent;
    base = 5;
    exponent = 4;
    int result = RaiseToPow(5, 4);
    printf("%i to the power of %i is %i", base, exponent, result);
    return EXIT_SUCCESS;
}