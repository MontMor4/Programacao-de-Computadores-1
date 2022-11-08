#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    x = y = 1;
    while (x != 0 && y != 0)
    {
        scanf("%i %i", &x, &y);
        if (x > 0 && y > 0)
            printf("primeiro\n");

        else if (x < 0 && y > 0)
            printf("segundo\n");

        else if (x < 0 && y < 0)
            printf("terceiro\n");

        else if (x > 0 && y < 0)
            printf("quarto\n");
    }
    return 0;
}
