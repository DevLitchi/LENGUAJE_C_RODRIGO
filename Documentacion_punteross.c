//Actividad 5.2
/*  Construir matriz de douyble pidiendo al usuario las medidas de NxM. El codigo debera de reservar memoria de acuerdo  a las dimensiones de la matriz
mostrar las direcciones de todos los elementos de la matriz junto a sus indices utilizando apuntadores lirerar memoria al final*/
#include<stdio.h>
#include<stdlib.h> // Libreria para usar malloc y free 
int main(){
double **matriz;// Declaracion de la matriz como apuntador doble se usa el ** para indicar que es un apuntador doble
int filas,columnas;
//Pedimos el valor de MxN

printf("Ingrese el numero de filas de la matriz: ");
scanf("%d",&filas);
printf("Ingrese el numero de columnas de la matriz: ");
scanf("%d",&columnas);

/*Reservamos memoria para la matriz de acuerdo a las dimensiones ingresadas por el usuario por medio de malloc es necesario 
agregar el double para indicar que es una matriz de tipo double y se usa el sizeof para indicar el tamaño de la matriz*/
matriz = (double **)malloc(filas*sizeof(double*));
for(int i=0;i<filas;i++){ // Se usa un for para recorrer las filas de la matriz 
    matriz[i] = (double *)malloc(columnas*sizeof(double)); 
}
for(int i=0;i<filas;i++){ // Se usa un for para recorrer las filas de la matriz
    for(int j=0;j<columnas;j++){ // Se usa un for para recorrer las columnas de la matriz
        printf("Direccion de memoria de la posicion [%d][%d]: %p\n",i,j,&matriz[i][j]); // %p imprime la direccion de memoria de la posicion de la matriz
    }
}
for(int i=0;i<filas;i++){ // Se usa un for para recorrer las filas de la matriz
    free(matriz[i]); // Liberar memoria de las columnas

free(matriz); // Liberar memoria de las filas
return 0;
}
}
//matriz = (double **) se uso para indicar que es un apuntador doble
//malloc(filas*sizeof(double*)); se uso para reservar memoria para las filas de la matriz y se uso el sizeof para indicar el tamaño de la matriz
//matriz[i] = (double *)malloc(columnas*sizeof(double)); se uso para reservar memoria para las columnas de la matriz y se uso el sizeof para indicar el tamaño de la matriz