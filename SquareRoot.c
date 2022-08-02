#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int CalcSquareRoot(int num)
{
    int guess = num / 2;
    int nextGuess = (guess + num / guess) / 2;
    while (abs(guess - nextGuess) > 0.0001)
    {
        guess = nextGuess;
        nextGuess = (guess + num / guess) / 2;
    }

    return guess;
}

void PrintSquareRoot(int param)
{
    printf("The square root of %i is %i\n", param, CalcSquareRoot(param));
}

int main(void)
{
    int x, y, z;
    x = 4;
    y = 9;
    z = 16;
    PrintSquareRoot(x);
    PrintSquareRoot(y);
    PrintSquareRoot(z);
}