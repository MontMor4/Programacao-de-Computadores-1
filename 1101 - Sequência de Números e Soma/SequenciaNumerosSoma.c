#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m = 1, n = 1, sum = 0, min, max;
    while (m > 0 && n > 0)
    {
        scanf("%i %i", &m, &n);
        if (m <= 0 || n <= 0)
        {
            break;
        }
        if (m < n)
        {
            min = m;
            max = n;
        }
        else
        {
            max = m;
            min = n;
        }
        while (min <= max)
        {
            printf("%i ", min);
            sum = sum + min;
            min++;
        }
        printf("Sum=%i\n", sum);
        sum = 0;
    }
    return 0;
}
