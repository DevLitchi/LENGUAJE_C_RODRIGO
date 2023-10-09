#include<stdio.h>

int main(){
    int i;
    i = 1;
    while (i<=10){
        printf("%i.\n",i);
        i++;
    }
    return 0;
}

/*
Este programa utiliza un bucle while para imprimir los números del 1 al 10 en la consola.
La variable i se inicializa en 1 y se incrementa en cada iteración del bucle hasta que alcanza el valor de 10.
En cada iteración, se imprime el valor actual de i en la consola utilizando la función printf.
El programa devuelve 0 al finalizar la ejecución.
Se pausa una vez se cumpla la condicion del While, While contiene la accion a realizar y su condicion cumple la accion y regresa a ver si
se cumple la condicion, si se cumple la condicion se vuelve a ejecutar la accion, si no se cumple la condicion se sale del bucle
*/
