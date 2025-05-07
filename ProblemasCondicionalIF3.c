//Hacer un diagrama de flujo para calcular el precio de un ticket ida y vuelta
//en ferrocarril, conociendo la distancia de ida y el tiempo de estancia.
//Tambi´en se sabe que si el numero de d´ıas de estancia es mayor a 7 y la
//distancias total (ida y vuelta) a recorrer es mayor a 800 km, el ticket tiene
//un descuento del 30%. El precio por km es de $0.23.

// Cruz Alegría Valeria Montserrat 

#include <stdio.h>

int main ()
{
    float cantidadfinal = 0.0, sueldo = 0.0, estancia, distancia, ida, vuelta;
    
    printf("distancia de ida: ");
    scanf("%f", &ida);
    printf("distancia de vuelta: ");
    scanf("%f", &vuelta);
    distancia = ida+vuelta;
    printf("dias de estancia: ");
    scanf("%f", &estancia);
    
    if(distancia>800 && estancia>7)
    {
        cantidadfinal=(distancia*.23);
        cantidadfinal=cantidadfinal-(cantidadfinal*.3);
        printf("cantidad final : %f", cantidadfinal);
    }
    else
    {
        cantidadfinal=(distancia*.23);
        printf("cantidad final : %f", cantidadfinal);
    }
    
return 0;
}
