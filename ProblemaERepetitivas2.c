// Cruz Alegria Valeria Montserrat

#include <stdio.h>

void main()
{
    int num = 0, i = 0, positivos = 0, negativos = 0, ceros = 0;

    while(i < 100)
    {
        printf("Número %d: ", i + 1);
        scanf("%d", &num);

        if(num > 0)
            positivos++;
        else if(num < 0)
            negativos++;
        else
            ceros++;

        i++;
    }

    printf("positivos: %d\nnegativos: %d\nceros: %d\n", positivos, negativos, ceros);
}
