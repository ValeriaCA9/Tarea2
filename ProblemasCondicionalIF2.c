//Dado como dato el sueldo de un trabajador considere un aumento del
//15% si un sueldo es inferior a $1,000 y de un 12% en caso contrario.
//Imprimir el sueldo con el aumento incorporado. Hacer el diagrama de
//flujo correspondiente.

// Cruz Alegría Valeria Montserrat 

#include <stdio.h>

int main ()
{
    float cantidadfinal = 0.0, sueldo = 0.0;
    
    printf("sueldo del trabajador: ");
    scanf("%f", &sueldo);
    
    if(sueldo<1000)
    {
        cantidadfinal=sueldo+(sueldo*.15);
        printf("cantidad final : %f", cantidadfinal);
    }
    else
    {
        cantidadfinal=sueldo+(sueldo*.12);
        printf("cantidad final : %f", cantidadfinal);
    }
    
return 0;
}
