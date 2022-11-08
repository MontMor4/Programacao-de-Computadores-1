#include <stdio.h>
#include <math.h>

int main()
{
    int n, linha, x2, x3;
    scanf("%i", &n);
    linha = 1;
    while (linha <= n)
    {
        x2 = pow(linha, 2);
        x3 = pow(linha, 3);
        printf("%i %i %i\n", linha, x2, x3);
        linha++;
    }
    return 0;
}