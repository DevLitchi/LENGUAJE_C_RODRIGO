#include<stdio.h>
//Primero iniciamos la libreria stdio.h para poder usar las funciones de entrada y salida
//Despues agregamos variables, tenemos que ingresar su tipo y su nombre por ejemplo int a; esto quiere decir que a sera un entero
//Tambien podemos agregar variables de tipo float, char, double, short, long, hay muchos tipos de variables se agegan como en el ejemplo 
//anterior con las letras que representan su tipo por ejemplo float a, char a, double a, short a, long a
int main(){
int a;
float d,e,f;
char g,h,i;
double j,k,l;
short m,n,o;
long p,q,r;
// Una vez definidas las funciones podemos usarlas en el programa por ejemplo en una suma de numeros ingresados por el usuario seria
printf("Bienvenido a la calculadora de sumas\n");
printf("Ingrese el primer numero: ");
scanf("%f",&d);
printf("Ingrese el segundo numero: ");
scanf("%f",&e);
//Para mostrar los resultados usamos printf y el nombre de la variables donde almacenaremos la operacion hecha por ejemplo primero almacenamos dicha operacion en una variable como
f = d+e;
if (f<10){
    printf("Error resultado es menor a 10");
    break;
}
if (f>10){
    printf("El resultado de la suma es: %f",f);
}
//printf("El resultado de la suma es: %f",f);
return 0;
}
//tambien podemos usar condicionales como un if, esto nos sirve para tener bajo un parametro dicha operacion o resultados por ejemplo si queremos que una suma 
//de un valor inferior a 10 nos muestre un mensaje de error y podemos usar un if y si es mayor a 10 nos muestre el resultado para dicho cambio deberiamos de regresar 
//a la linea 22 ya que en la 21 tenemos la variable con el dato a evaluar en este caso F se evaluara, para volver a el codigo anterios del if. Eliminar if y quitar // a la linea 28    
