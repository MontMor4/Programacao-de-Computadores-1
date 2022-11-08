#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, maior, menor, soma;
    scanf("%i\n%i", &x, &y);
    if (x >= y)
    {
        maior = x;
        menor = y;
    }
    else
    {
        maior = y;
        menor = x;
    }
    soma = 0;
    while (maior >= menor)
    {
        if (menor % 13 != 0)
        {
            soma = soma + menor;
            menor++;
        }
        else
        {
            menor++;
        }
    }
    printf("%i\n", soma);

    return 0;
}
