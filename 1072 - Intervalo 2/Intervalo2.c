#include <stdio.h>
// ler n numeros inteiros (valor de n dado pelo usuário)
// solicitar inserção de valores em quanto nao tiver n valores
// guardar em uma variável se o número está entre 10 e 20
// guardar em outra variável se nao estiver

int main()
{
    int n, x, in, out;
    scanf("%i", &n);
    in = out = 0;
    while (n > 0)
    {
        scanf("%i", &x);
        n--;
        if (x >= 10 && x <= 20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    printf("%i in\n%i out\n", in, out);

    return 0;
}
