//Escriba un diagrama de flujo tal que dado como datos dos numeros y 
//calcular la suma, resta y multiplicaci´on de dichos numeros.
//Cruz Alegria Valeria Montserrat 

#include <stdio.h>

int main ()
{
    int suma = 0,resta = 0, multiplicacion = 0, cifra1, cifra2;
    
    printf("primer cifra: ");
    scanf("%d", &cifra1);
    printf("segunda cifra: ");
    scanf("%d", &cifra2);
    
    suma=cifra1+cifra2;
    resta=cifra1-cifra2;
    multiplicacion=cifra1*cifra2;
    
    printf("suma: %d", suma);
    printf(" resta: %d", resta);
    printf(" multiplicación: %d", multiplicacion);
    
    return 0;
   
    
}
