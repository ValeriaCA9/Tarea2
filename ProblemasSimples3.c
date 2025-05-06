//En una Casa de Cambio necesitan construir un programa que dado como
//dato una cantidad expresada en d´olares, convierta esa cantidad en pesos.
//Construir el diagrama de flujo correspondiente. Tomar en cuenta que:
//1dolar ↢ 11.96pesos.
//Cruz Alegria Valeria Montserrat 

#include <stdio.h>

int main ()
{
    float pesos = 0.0, dolares;
    
    printf("cantidad de dolares: ");
    scanf("%f", &dolares);
    
    pesos= 11.96*dolares;
    
    printf("equivalente a esta cantidad de pesos : %f", pesos);

    return 0;
   
    
}
