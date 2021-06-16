/* Metodo de ordenamiento QuickSort.
Este metodo consiste en tomar un numero del vector al cual se le llama 'Pivote'
y ambos extremos del vector (Izquierda,Derecha), En este caso el pivote sera el numero del medio,
para asi realizar comparaciones entre las dos partes, aumentando a la posicion que se apunta del lado izquierdo 
Y disminuyendo a la posicion que se apunta del lado derecho en caso de que ya no haya numeros por mover. */
#include <stdio.h>

//Declaro la funcion 
void qs (int lista[],int limite_izq,int limite_der) 
{
    int  izq,der,temporal,pivote; 
    
    izq = limite_izq; 
    der = limite_der;
    pivote = lista[(izq+der)/2]; //Le indico que el pivote va a ser el numero del medio del vector

    do
    {   
       /*  Descarto estar parado sobre un numero que ya está ordenado, si no hay que moverlos
        aumento izquierda o disminuyo derecha, para asi seguir comparando  */
        while(lista[izq]<pivote && izq<limite_der)izq++; 
        while(pivote<lista[der] && der > limite_izq)der--;
        if(izq <= der)
        { 
            /* Ustilizo una variable temporal para alojar el valor de la izquierda y asi no perderlo 
            cuando lo reempalce por el valor de la derecha, y al valor de la derecha se le asigna el valor
            que guardamos en la variable temporal, que era el valor de la izquierda */
            temporal = lista[izq];
            lista[izq] = lista[der];
            lista[der] = temporal;
            izq++;
            der--;
        }

    } while (izq<=der); /* Valido que los limites no se hayan pasado ya */
    /* Ahora se utiliza el metodo de recursividad, para asi ordenar el vector dividido en 2 partes */
    if(limite_izq<der){qs(lista,limite_izq,der);} 
    if(limite_der>izq){qs(lista,izq,limite_der);} 
}

void quicksort(int lista[],int n)
{
    qs(lista,0,n-1);
}

int main(int argc, const char * argv[])
{   
    /* Declaro el vector con sus elementos. */
    int lista[] ={100,56,0,1,-45,2,46,5,9,6,67,23,5};
    /* Saco cuanto mide el vector en bytes, para calcular el medio del vector. */
    int size = sizeof(lista)/sizeof(int);
    /* Muestro la lista desordenada */
    printf("Lista Desordenada \n");
    for (int i=0; i<size; i++)
    {
       printf("%d",lista[i]);
        if(i<size-1)
          printf(",");
    }
    printf("\n");
    quicksort(lista,size);
    /* Muestro la lista ordenada */
    printf("Lista Ordenada \n");
    for (int i=0; i<size; i++)
    {
        printf("%d",lista[i]);
        if(i<size-1)
          printf(",");
    }
    return 0;

   
}   