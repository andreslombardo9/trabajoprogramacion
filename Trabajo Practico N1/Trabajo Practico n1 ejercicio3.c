#include <stdio.h>
char minuscula (int letra)
{
    return (letra + 32);
}

char mayuscula (int letra)
{
    return (letra -32);
}

void main()
{
    char letraingresada;

    printf("Ingrese una letra: ");
    scanf("%c", &letraingresada);

    int ascii = letraingresada;
    
    printf("\n Ascii leido %i \n", ascii);

    if ((ascii == -92) || (ascii == -91))
    {
        if (ascii == -92)
        {
            printf( " \n Letra mayusculas ");
            printf("%c", 165);
        }
        else
        {
            printf(" \n Letra minuscula ");
            printf("%c", 164);    
        }
    }
    else
    {
        if ((ascii >= 65)&&(ascii <= 90))
        {
            printf(" \n Letra minuscula %c", minuscula(ascii));
        } else if ((ascii >= 97)&& (ascii <= 122))
        {
            printf(" \n Letra mayuscula %c", mayuscula(ascii));
        }
    }
}