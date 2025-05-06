//Construir un diagrama de flujo tal que dado el radio de un c´ırculo, calcule
//e imprima el ´area y la circunferencia. El ´area del c´ırculo se calcula como
//Area = π ∗ radio2 y la circunferencia se calcula como Circunferencia =
//2 ∗ π ∗ radio.

//Cruz Alegria Valeria Montserrat 

#include <stdio.h>

int main ()
{
    int circunferencia = 0, area = 0, radio;
    
    printf("radio de la circunferencia: ");
    scanf("%d", &radio);
    
    area= 3.1416*radio*radio;
    circunferencia=2*3.1416*radio;
    
    printf("area: %d", area);
    printf(" circunferencia: %d", circunferencia);

    
    return 0;
   
    
}
