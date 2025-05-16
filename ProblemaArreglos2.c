// Cruz Alegria Valeria Montserrat

#include <stdio.h>

void main()
{
    int A[100], n, repetido, c = 0;

    printf("tamano arreglo: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Número repetido: ");
    scanf("%d", &repetido);

    for(int i = 0; i < n; i++)
    {
        if(A[i] == repetido)
            c++;
    }

    printf("se repite %d veces\n", c);
}
