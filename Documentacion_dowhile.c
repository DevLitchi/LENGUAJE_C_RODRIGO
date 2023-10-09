#include<stdio.h>
//int main(){
    //int i; // i es el contador e iterador comenzamos conb i = 1 para realizar un conteo de 1 a 10
    //i = 1;
    //do{ // Dentro del do va la accion que se desea realizart cuantas veces deseemos en este caso 
        //printf("%i.\n",i);
        //i++;
    //}while(i<=10);// hasta que i sea menor o igual a 10 while se encarga de hacer la condicional del contendio de do, es decir
    //realizar Do hasta que llegue al parametro que me indico While

int main(){
    char opc;
    do{
        fflush(stdin); //Limpia el buffer de entrada
        printf("Hola mi nombre es Leonardo\n");
        printf("Deseas volver a saludar?\nPresiona [S] para volver a saludar\n");
        scanf("%c",&opc);
    }while(opc == 'S' || opc == 's'); // || significa o, es decir si la variable opc es igual a S o s se volvera a ejecutar el do
    return 0;
}
