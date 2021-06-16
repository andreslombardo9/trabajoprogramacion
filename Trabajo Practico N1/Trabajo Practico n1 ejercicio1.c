#include <stdio.h>

void main()
{   
    int ancho,alto,profundidad, volumen,area;
    printf ("Ingrese el ancho del prisma rectangular: ");
    scanf("%i",&ancho);
    printf("Ingrese el alto del prisma rectangular: ");
    scanf("%i",&alto);
    printf("Ingrese la produndiad del prisma rectangular: ");
    scanf("%i",&profundidad);

    volumen= ((ancho*alto)*profundidad);
    area= ((2*ancho*alto)+(2*ancho*profundidad)+(2*alto*profundidad));
    printf("El volumen del prisma rectangular es %i y el area de todo el prisma es %i .",volumen,area);

    
    

}