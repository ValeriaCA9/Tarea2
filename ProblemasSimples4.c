//Una persona invierte en un banco una determinada cantidad de dinero y
//a una cierta tasa de inter´es mensual. Construya un diagrama de flujo que
//permita obtener el monto de dinero que obtendr´a al finalizar el mes.
//Cruz Alegria Valeria Montserrat 

#include <stdio.h>

int main ()
{
    float cantidadfinal = 0.0,ganancias = 0.0, dinero, interes;
    
    printf("dinero inicial: ");
    scanf("%f", &dinero);
    printf("porcentaje de interes anual: ");
    scanf("%f", &interes);
    
    ganancias = dinero*(interes/100);
    cantidadfinal = ganancias+dinero;
    
    printf("ganancias : %f", ganancias);
    printf(" cantidad que tendra al final del año : %f", cantidadfinal );

    return 0;
   
    
}
