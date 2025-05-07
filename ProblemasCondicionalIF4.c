//Construir un diagrama de flujo que pueda determinar, dados dos n´umeros
//enteros, si un n´umero es divisor del otro.

// Cruz Alegría Valeria Montserrat 

#include <stdio.h>

int main ()
{
    int a, b, resultado = 0;
    
    printf("cifra 1: ");
    scanf("%d", &a);
    printf("cifra 2: ");
    scanf("%d", &b);
    
    resultado= a % b;
    
    if(resultado!=0)
    {
        printf("son divisores");
    }
    else
    {
        printf("no son divisores");
    }
    
return 0;
}
