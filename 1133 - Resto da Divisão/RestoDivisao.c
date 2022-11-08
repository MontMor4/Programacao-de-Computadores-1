#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, min, max;
    scanf("%i\n%i", &x, &y);
    if (x < y)
    {
        min = x + 1;
        max = y;
    }
    else
    {
        max = x;
        min = y + 1;
    }
    while (min < max)
    {
        if (min % 5 == 2 || min % 5 == 3)
        {
            printf("%i\n", min);
            min++;
        }
        else
        {
            min++;
        }
    }
    return 0;
}
