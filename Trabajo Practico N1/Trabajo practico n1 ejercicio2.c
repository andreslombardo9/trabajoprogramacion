//Un cyber café necesita un programa para procesar la información relacionada con las
//computadoras que posee. Se necesita leer cantidad de computadoras, y precio por hora
/* de uso. Luego ingresar la cantidad de horas de uso de cada computadora en el mes.
se pide:
a) calcular el monto total recaudado por el cyber en el mes.
b) informar cual fue la computadora con menor cantidad de horas de uso y monto recaudado
por la misma. */
#include <string.h>
#include <stdio.h>
void main()
{   
    int totalhoras=0;
    int cantcomputadoras;
    int precio;
    int canthoras;
    int menoshoras=9999;
    printf("Ingrese cantidad de computadoras que hay en el cyber: ");
    scanf("%i", &cantcomputadoras);
    printf("\n");
    int vector[cantcomputadoras];
    printf("Ingrese precio por hora del cyber: ");
    scanf("%i", &precio);
    
    printf("Ingrese las horas que se utilizo cada computadora \n");

    for (int i = 0; i < cantcomputadoras; i++)
    {
        printf("Cantidad de horas en la computadora numero %i :",i);
        scanf("%i", &vector[i]);
        printf("\n");
        totalhoras += vector[i];
        while (canthoras > vector[i])
        {
            canthoras = vector[i];
            menoshoras = i;
        }
    }
    printf("El monto total que recaudo el cyber fue: %i ", totalhoras*precio);
    printf("\nLa computadora que menos horas hizo fue la %i ", menoshoras);    
    printf("\nY la cantidad de horas que hizo fue: %i ", canthoras);
    
}
