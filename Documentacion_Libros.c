//Estructuras de datos utilizadas en el programa
#include<stdio.h>
#include<stdlib.h>

typedef struct{// se declara fuera del main y puede ser de muchos tipos
    int pagina; // Atributos de la estructura
    char nombre[50]; // Atributos de la estructura
    float precio; // Atributos de la estructura 
}libro; // Nombre de la estructura

int main(){
    int i; // Variable de control
    libro JT[10];// Se declara un arreglo de estructuras que genera en total 10 estructuras
    for (i = 0; i < 10; i++){ // Se llena el arreglo de estructuras con un ciclo for 
        JT[i].precio = 25 + i; //Se llama al arreglo con el indice i para que pase del arreglo en la estructura 0 hasta la decima y se le asigna un valor a su atributo de precio, despues de asignar 25, se le sumara 1=i
        printf("El precio de la estructura  %i es de %f.\n",i+1,JT[i].precio);//Se iumprime el resultado en cada una de las estrcutruas del arreglo
    }
        
    
    system("pause");
    return 0;
}
//Estructuras de datos utilizadas en el programa