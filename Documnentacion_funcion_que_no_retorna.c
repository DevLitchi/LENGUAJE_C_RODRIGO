void suma(){ //En este caso no se inicializa ningun parametro
int a,b,c;  //Las varibales se inicializan dentro de la funcion
printf("Ingrese el primer numero: ");
scanf("%d",&a);
printf("Ingrese el segundo numero: ");
scanf("%d",&b);
c=a+b; //Aqui se llama a la funcion y se le asigna a la variable c el valor que genere la funcion
printf("El resultado de la suma es: %d",c); //Aqui se imprime el resultado de la suma
}
main()
{ 
    suma();
    getch();
}