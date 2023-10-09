#include<stdio.h>
int/*Este es el tipo de dato de la variable */ suma/*Este es el nombre de la variable*/*(int a,int b)/*Aqui van los parametros o datos que se usaran en la funcion y su tipo*/{
    return a+b;//Este es el valor que regresa la funcion
}

int main(){
    int a,b,c;//Se tienen que iniciar lasvariables que se usaran en el programa dentro del main
    printf("Ingrese el primer numero: ");
    scanf("%d",&a);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&b);
    c = suma(a,b); //Aqui se llama a la funcion y se le asigna a la variable c el valor que regresa la funcion
    printf("El resultado de la suma es: %d",c); //Aqui se imprime el resultado de la suma
    return 0; 
}