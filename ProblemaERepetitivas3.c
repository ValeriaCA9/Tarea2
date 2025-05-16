// Cruz Alegria Valeria Montserrat


#include <stdio.h>

void main()
{
    int suma = 0, i = 10;

    while(i <= 50)
    {
        suma += i;
        i += 2;
    }

    printf("La suma de pares entre 10 y 50  %d\n", suma);
}
