#include <stdio.h>

int sumTwo(int a, int b)
{
    return (a + b);
}

int square(int n)
{
    return (n * n);
}

int get_max(int x, int y)
{
    if (x > y)
        return x;
   
    return y;
}

int main(void)
{
    printf("sumTwo result : %i\n", sumTwo(3, 5));
    printf("square result: %i\n", square(4));
    printf("get_max result: %i\n", get_max(10, 7));

    return 0;
}