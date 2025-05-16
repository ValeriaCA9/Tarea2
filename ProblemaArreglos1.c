// Cruz Alegria Valeria Montserrat

#include <stdio.h>

void main()
{
    int A[100], n, suma = 0;

    printf("tamaño arreglo: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
        suma += A[i];
    }

    printf("suma: %d\n", suma);
}
