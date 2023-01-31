#include <stdio.h>

int get_max(int x, int y)
{
    int z = 0;
    if (x > y)
    {
        z = x;
    }
    else
    {
        z = y;
    }
    return z;
}

int main()
{
    extern int get_max(int x, int y);
    int a = 10;
    int b = 20;
    int max = get_max(a, b);
    printf("max = %d\n", max);
    return 0;
}