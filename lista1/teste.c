#include <stdio.h>
#include <stdlib.h>

#define ARRAYLENGTH 100
long long int memoization[ARRAYLENGTH];

long long unsigned int fibonacci(long long unsigned int n)
{
    if (memoization[n] != -1) return memoization[n];

    return (n < 2)? n : (memoization[n] = fibonacci(n-1) + fibonacci(n-2));
}

int main(void)
{
    unsigned int num = 0;

    for(unsigned int i = 0; i < ARRAYLENGTH; i++) memoization[i] = -1;

    // printf("Enter how far to calculate the series: ");
    if (scanf("%i", &num) <= 0)
    {
        // puts("Invalid input.");
        return -1;
    }
    if (num < ARRAYLENGTH)
    {
        for(unsigned int n = 1; n < num + 1; ++n) printf("%llu ", fibonacci(n));
    }
    else
    {
        // puts("Input number is larger than the array length.");
        return -2;
    }
}