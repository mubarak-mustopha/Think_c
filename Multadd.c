#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Multadd(double x, double y, double z)
{
    double output = x * y + z;
    printf("%f\n", output);
}

void Yikes(double a)
{
    double x = a;
    double exponent = exp(-x);
    double y = exponent;
    double z = sqrt(1 - exponent);
    Multadd(x, y, z);
}

int main(void)
{
    double x, y, z;
    x = 1.0;
    y = 2.0;
    z = 3.0;
    Multadd(x, y, z);
    const double PI = 3.14159;
    double a, b, c;
    a = 1;
    b = sin(PI / 4);
    c = cos(PI / 4) / 2;
    Multadd(a, b, c);
    Yikes(3);
    return EXIT_SUCCESS;
}
