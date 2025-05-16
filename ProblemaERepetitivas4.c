// Cruz Alegria Valeria Montserrat

#include <stdio.h>

void main()
{
    int N = 0, i = 1, producto = 1;

    printf("Ingrese N: ");
    scanf("%d", &N);

    while(i <= N)
    {
        producto *= i;
        i++;
    }

    printf("producto: %d\n", producto);
}
