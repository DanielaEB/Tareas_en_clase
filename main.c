/******************************************************************************
Defina el area de un circulo 
*******************************************************************************/
#include <stdio.h>
# define pi 3.1416
int main()
{
    float radio, area;
    printf("Ingrese area");
    scanf("%f",&radio);
    area=pi*radio*radio;
    printf("El area del circulo es %f", area);

    return 0;
}