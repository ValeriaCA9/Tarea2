//En un negocio de productos electrodom´esticos aplican un descuento del
//8% a todos aquellos clientes cuya compra es superior a $2,500. Dado como
//dato el monto de la compra del cliente, calcule lo que el cliente debe pagar.
//Hacer el diagrama de flujo correspondiente.

// Cruz Alegria Valeria Montserrat 

#include <stdio.h>

int main ()
{
    float cantidadfinal = 0.0, dinero = 0.0;
    
    printf("valor de compra: ");
    scanf("%f", &dinero);
    
    if(dinero>2500)
    {
        cantidadfinal=dinero-(dinero*.08);
        printf("cantidad final : %f", cantidadfinal);
    }
    else
    {
        printf("cantidad final : %f", dinero);
        return 0;
    }
    
}
