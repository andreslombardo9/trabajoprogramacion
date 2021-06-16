#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool biciesto(int anio)
{
    return ((anio % 4) == 0) && (((anio % 100) !=0) || ((anio % 400) == 0 ));
}
int validardia (int dia,int mes,int anio)
{
    int findemes[12]={ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    mes--;
    if (biciesto (anio))
    {
        findemes[1]++;
    }
    if ((dia < 1) || (dia > findemes[mes]))
    {
        return 0;
    }
    if ((mes < 1) ||(mes > 12))
    {
        return 0;
    }
    return (findemes[mes] - dia);
}
void main()
{
    int diaingresado,mesingresado,anioingresado;
    int diasresantes;

    printf("Ingrese d%ca: ", 161);
    scanf("%d", &diaingresado);

    printf("Ingrese mes: ");
    scanf("%d", &mesingresado);

    printf("Ingrese a%co: ", 164);
    scanf( "%d", &anioingresado );

    diasresantes = validardia(diaingresado,mesingresado,anioingresado);

    if (diasresantes != 0)
    {
        printf("\n Fecha valida ");
        if (biciesto(anioingresado))
        {
            printf ("\n   El a%co es biciesto.", 164);
        } else {
            printf ("\n   El a%co no es biciesto.", 164);
        }
        printf ("\n   Dias restantes en el mes: ");
        printf ("%d", diasresantes );
    }
    else
    {
        printf ("Fecha invalida.\n");
    }
    getch();
}