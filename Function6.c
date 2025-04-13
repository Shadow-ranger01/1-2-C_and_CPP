// WAP to print average of beest two
#include <stdio.h>

int average(int max, int smax)
{
    int ave = 0;
    ave = (max + smax) / 2;
    return ave;
}

int main()
{
    int x, y, z, a, max, smax;
    printf("Enter three unique number: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x > y && x > z)
    {
        max = x;
        if (y > z)
            smax = y;
        else
        {
            smax = z;
        }
    }
    if (y > x && y > z)
    {
        max = y;
        if (x > z)
            smax = x;
        else
        {
            smax = z;
        }
    }
    if (z > y && z > x)
    {
        max = z;
        if (x > y)
            smax = x;
        else
        {
            smax = y;
        }
    }

    a = average(max, smax);
    printf(" average of best two numbers is %d", a);

    return 0;
}
