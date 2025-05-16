// Cruz Alegria Valeria Montserrat

#include <stdio.h>

void main()
{
    int A[100], n, p = 0, ne = 0, ceros = 0;

    printf("tamano arreglo: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("%d: ", i);
        scanf("%d", &A[i]);

        if(A[i] > 0)
            p++;
        else if(A[i] < 0)
            ne++;
        else
            ceros++;
    }

    printf("Positivos: %d\nNegativos: %d\nCeros: %d\n", p, ne, ceros);
}
