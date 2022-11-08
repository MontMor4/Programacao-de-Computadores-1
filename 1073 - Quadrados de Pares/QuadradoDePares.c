#include <stdio.h>
#include <math.h>
/* Leia um valor inteiro N.
Apresente o quadrado de cada um dos valores pares,
 de 1 até N, inclusive N, se for o caso.
*/

int main()
{
    int n, x;
    scanf("%i", &n);
    x = 6;
    printf("2^2 = 4\n");
    printf("4^2 = 16\n");
    while (x <= n)
    {
        printf("%i^2 = %i\n", x, x * x);
        x = x + 2;
    }

    return 0;
}
