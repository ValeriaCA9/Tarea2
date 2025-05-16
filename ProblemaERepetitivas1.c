// Cruz Alegria Valeria Montserrat


#include <stdio.h>

void main()
{
    int N = 0, i = 1, resultado = 0;

    printf("Ingrese un número: ");
    scanf("%d", &N);

    while(i <= 10)
    {
        resultado = N * i;
        printf("%d x %d = %d\n", N, i, resultado);
        i++;
    }
}
