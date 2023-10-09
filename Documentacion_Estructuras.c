//Estructuras de datos utilizadas en el programa
#include<stdio.h>
#include<stdlib.h>

typedef struct{// se declara fuera del main y puede ser de muchos tipos
    int pagina; // Atributos de la estructura
    char nombre[50];
    float precio;
}libro; // Nombre de la estructura

int main(){

    libro JT,CR;

    JT.pagina = 50;
    JT.precio = 20.5;
    strcpy(JT.nombre, "Juego de tronos");

    CR.pagina = 30;
    CR.precio = 123.5;
    strcpy(CR.nombre, "Choque de reyes");


    printf("El libro de juego de tronos tiene %i paginas\n",JT.pagina);
    printf("El nombre de libro es %s.\n", JT.nombre);
    printf("El precio del libro es %.2f.\n", JT.precio);
    printf("\n");
    printf("El libro de juego de tronos tiene %i paginas\n",CR.pagina);
    printf("El nombre de libro es %s.\n", CR.nombre);
    printf("El precio del libro es %.2f.\n", CR.precio);

    system("pause");
    return 0;
}