#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main(void)
{
    int x, y;
    x = 36;
    y = 20;
    int result = gcd(x, y);
    printf("Gcd of %i and %i is %i\n", x, y, result);
    return EXIT_SUCCESS;
}