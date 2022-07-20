#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double raiseToPow(double x, double y);

void checkFermat(int a, int b, int c, int n)
{
    int pow_a, pow_b, pow_c;
    pow_a = (int)raiseToPow(a, n);
    pow_b = (int)raiseToPow(b, n);
    pow_c = (int)raiseToPow(c, n);

    if ((pow_a + pow_b) == pow_c)
    {
        printf("Holy smokes, Fermat was wrong!");
    }

    else
    {
        printf("No, that doesn’t work.");
    }
}

double raiseToPow(double x, double y)
{
    return pow(x, y);
}

int main(void)
{
    int a, b, c, n;
    a = 3;
    b = 4;
    c = 5;
    n = 2;
    checkFermat(a, b, c, n);
}