#include <stdio.h>

int main()
{
    int x, y, temp;
    scanf("%i %i", &x, &y);
    temp = 1;
    while (temp <= y)
    {
        printf("%i", temp);
        temp++;
        if (temp % x == 1)
        {
            printf("\n");
        }
        else
            printf(" ");
    }
    return 0;
}
