/*#include<stdio.h>
int main(){
char *ap,c; // *ap es un puntero a un caracter, c es un caracter es necesario siempre poner el * antes del nombre de la variable para el apuntador
c = 'X'; // c es igual a X se establece el valor de la variable y la variable
ap = &c; // ap es igual a la direccion de memoria de c, se establece la direccion de memoria de la variable
printf("Caracter: %c\n",*ap);   // *ap es el valor de la variable a la que apunta ap al poner %c se imprime el valor de la variable
printf("Codigo ASCII: %d\n",*ap); // %d imprime el valor de la variable en codigo ASCII 
printf("Direccion de memoria: %p\n",ap); // %p imprime la direccion de memoria de la variable
return 0;
}
*/

/*Ejemplo 2
#include<stdio.h>
int main(){
//Este programa crea un apuntador de tipo int y modifica la informacion atraves del mismo
short a = 5, b=10;
short *apuntadoraentero;
apuntadoraentero = &a;
printf("Valor del entero: %i\n",*apuntadoraentero);// %i imprime el valor de la variable
b=*apuntadoraentero; // b es igual al valor de la variable a la que apunta apuntadoraentero en la linea 19 vemos que apunta a la variable a por lo que b = 5
printf("Valor de b: %i\n",b); // %i imprime el valor de la variable
b = *apuntadoraentero + 1; // b es igual al valor de la variable a la que apunta apuntadoraentero + 1 en la linea 19 vemos que apunta a la variable a por lo que b = 5 + 1 = 6
*apuntadoraentero = 0;
printf("Valor de a: %i\n",a); // %i imprime el valor de la variable
return 0;
}
*/

/*Ejemplo 3
#include<stdio.h>
//APUNTADOR AL COMIENZO DE UN ARREGLO
int main(){
    short arr[5],*aparr;
    aparr = &arr[0]; // aparr es igual a la direccion de memoria del arreglo arr
    printf("Direccion de memoria del arreglo en la primera posiscion: %x\n",&arr[0]); // %x imprime la direccion de memoria del arreglo en la primera posicion y el [0] indica la posicion
    printf("Direccion de memoria del arreglo en la segunda posiscion: %x\n",&arr); // %x imprime la direccion de memoria del arreglo en la segunda posicion y el [1] indica la posicion
    printf("Direccion del apuntador: %x\n",aparr); // %x imprime la direccion de memoria del apuntador
    return 0;
}
*/


#include<stdio.h>
int funcion(int argumento);
int main(int argc, char *argv[]){
    int varlocal = 33;
    int resultadodellamada;
    printf("\n\nVisualizacion de Direcciones\n\=========================================\n\n");
    printf("Direccion de memoria de la variable local: %ul\n",&varlocal); // %ul imprime la direccion de memoria de la variable local
    printf("La direccion de resultadodellamada es: %ul\n",&resultadodellamada); // %ul imprime la direccion de memoria de la variable resultadodellamada
    printf("La direccion de main es : %ul\n",main);
    printf("La direccion de funcion es : %ul\n",funcion);
    resultadodellamada = funcion(varlocal);
    printf("\n\nVisualizacion de Valores\n\=========================================\n\n");
    printf("El valor de resultadodellamada es: %d\n",resultadodellamada); // %d imprime el valor de la variable resultadodellamada
    printf("El valor de varlocal es: %d\n",varlocal); // %d imprime el valor de la variable varlocal
    return 0;
}
int funcion(int argumento){
    int resultado;
    resultado = argumento * 3;
    printf("Direccion de argumento es : %ul\n",&argumento); // %ul imprime la direccion de memoria de la variable argumento
    printf("Direccion de resultado es : %ul\n",&resultado); // %ul imprime la direccion de memoria de la variable resultado
    return resultado;
}