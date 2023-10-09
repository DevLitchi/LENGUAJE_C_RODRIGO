#include<stdio.h>
int main(){
    int i;
for (int i=1/*Aqui se inicializa el contador*/;/*Se usa ; para separar la inicializacion de la condicion*/i<=100/*Aqui se declara la condicion*/;i++/*Aqui va la iteracion del incrementador correspondiente*/)
{
    printf("%i No debo llegar tarde a clases\n",i);
}
}