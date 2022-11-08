#include <stdio.h>

int main()
{
    int n, cem, cinquenta, vinte, dez, cinco, dois, um;
    scanf("%i", &n);
    cem = n / 100;
    cinquenta = (n % 100) / 50;
    vinte = ((n % 100) % 50) / 20;
    dez = (((n % 100) % 50) % 20) / 10;
    cinco = ((((n % 100) % 50) % 20) % 10) / 5;
    dois = (((((n % 100) % 50) % 20) % 10) % 5) / 2;
    um = (((((n % 100) % 50) % 20) % 10) % 5) % 2;
    printf("%i\n%i nota(s) de R$ 100,00\n%i nota(s) de R$ 50,00\n%i nota(s) de R$ 20,00\n%i nota(s) de R$ 10,00\n%i nota(s) de R$ 5,00\n%i nota(s) de R$ 2,00\n%i nota(s) de R$ 1,00\n", n, cem, cinquenta, vinte, dez, cinco, dois, um);

    return 0;
}
