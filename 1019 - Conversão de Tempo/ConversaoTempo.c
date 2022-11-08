#include <stdio.h>

int main()
{
    int n, h, m, s;
    scanf("%i", &n);
    h = n / 3600;
    m = (n % 3600) / 60;
    s = (n % 3600) % 60;
    printf("%i:%i:%i\n", h, m, s);

    return 0;
}
