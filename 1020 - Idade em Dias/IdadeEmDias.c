#include <stdio.h>

/*
Leia um valor inteiro correspondente à idade de
uma pessoa em dias e informe-a em anos, meses e dias
4 variáveis inteiras
ler a variável dias de idade
dias/365 --> quantidade de anos +1 variável(anos)
(dias%365)/30 --> quantidade de meses +1 variável(meses)
(dias%365)%30 --> quantidade de dias +variável(dias)
imprimir o resultado
*/

main()
{
    int idade, anos, meses, dias;
    scanf("%i", &idade);
    anos = idade / 365;
    meses = (idade % 365) / 30;
    dias = (idade % 365) % 30;
    printf("%i ano(s)\n%i mes(es)\n%i dia(s)\n", anos, meses, dias);

    return 0;
}
