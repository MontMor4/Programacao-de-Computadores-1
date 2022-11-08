#include <stdio.h>

// while n<10

int main()
{
    int n, temp1, temp2, maior, posicao;
    n = posicao = 1;
    scanf("%i", &temp1);
    maior = temp1;
    while (n < 100)
    {
        n++;
        scanf("%i", &temp2);
        if (temp2 > maior)
        {
            maior = temp2;
            posicao = n;
        }
    }
    printf("%i\n%i\n", maior, posicao);

    return 0;
}
