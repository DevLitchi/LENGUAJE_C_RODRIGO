#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Para usar system("cls") y system("pause")
#include <locale.h> // Para usar tildes y ñ

struct Pelicula{ // Estructura de la pelicula con sus atributos 
    int ID;
    char nombre[100];
    int year;
    char genero[100];
    char status[100];
};

void imprimirPelicula(struct Pelicula pelicula) { // Funcion para imprimir los datos de la pelicula 
    printf("[ID]: %d\n", pelicula.ID); // Se imprimen los datos de la pelicula
    printf("[Estatus]: %s\n", pelicula.status);
    printf("[Nombre]: %s\n", pelicula.nombre);
    printf("[Año]: %d\n", pelicula.year);
    printf("[Género]: %s\n", pelicula.genero);
    printf("\n");
}

int main(){
    setlocale(LC_ALL, "es_ES.UTF-8"); // Para usar tildes y ñ
    struct Pelicula pelicula[50]; // Se crea un arreglo de estructuras de peliculas
    int numPeliculas = 0; // Se inicializa el numero de peliculas en 0
    int opcion = 0; // Se inicializa la opcion en 0
    int i, id; // Se inicializan las variables i y id en 0
    char genero[50], status[50];  // Se inicializan las variables genero y status en 0
    numPeliculas=0; // Se inicializa el numero de peliculas en 0

    do {
        printf("\n        [MENU PRINCIPAL]       "); // Se imprime el menu principal
        printf("\n=============================\n");
        printf("\n[1.] Registrar pelicula\n");
        printf("[2.] Mostrar peliculas\n");
        printf("[3.] Buscar pelicula por genero\n");
        printf("[4.] Cambiar el estado de la pelicula\n");
        printf("[5.] Actualizar pelicula\n"); //Esta opcion no estaba en las instrucciones pero la agregue por que me equivoque muchas veces al agregar mas de 2 peliculas y me era muy tardado el reiniciar el progrma para volverlas a ingresar sin errores
        printf("[6.] Eliminar pelicula\n"); //Esta opcion tampoco estaba, la agregue por si me equivoco eliminar la pelicula y no tener que reiniciar el programa
        printf("[7.] Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);// Se lee la opcion

        switch(opcion) {
            case 1: // Se agrega una pelicula
                printf("[Sustituya los espacios con '_']");
                printf("\nIngrese el nombre de la pelicula: ");
                scanf("%s", pelicula[numPeliculas].nombre); // Se lee el nombre de la pelicula y se almacena en el arreglo de estructuras
                printf("Ingrese el año de creacion: ");
                scanf("%d", &pelicula[numPeliculas].year);// Se lee el año de la pelicula y se almacena en el arreglo de estructuras
                printf("Ingrese el genero de la pelicula: ");
                scanf("%s", pelicula[numPeliculas].genero);// Se lee el genero de la pelicula y se almacena en el arreglo de estructuras
                pelicula[numPeliculas].ID = numPeliculas + 1;// Se le asigna un ID a la pelicula
                strcpy(pelicula[numPeliculas].status, "activo");// Se le asigna un estado a la pelicula
                numPeliculas++;// Se aumenta el numero de peliculas
                system("cls");
                printf("\nAGREGADA CON EXITO.\n");
                break;
            case 2:// Se muestran las peliculas
                system("cls");// Se limpia la pantalla
                printf("Catalogo completo:\n");// Se imprime el catalogo completo
                for(i = 0; i < numPeliculas; i++) {// Se recorre el arreglo de estructuras de peliculas para imprimir cada una
                    imprimirPelicula(pelicula[i]);// Se llama a la funcion imprimirPelicula para imprimir los datos de la pelicula
                }
                break;
            case 3:// Se busca una pelicula por genero
                system("cls");
                printf("Ingrese el genero de la pelicula: ");// Se lee el genero de la pelicula a buscar
                scanf("%s", genero);// Se almacena el genero de la pelicula a buscar
                for(i = 0; i < numPeliculas; i++) {// Se recorre el arreglo de estructuras de peliculas para imprimir cada una
                    if(strcmp(pelicula[i].genero, genero) == 0) {// Se compara el genero de la pelicula con el genero ingresado
                        imprimirPelicula(pelicula[i]);// Se llama a la funcion imprimirPelicula para imprimir los datos de la pelicula
                    }
                }
                break;
            case 4:// Se cambia el estado de una pelicula
                system("cls");
                printf("Ingrese el ID de la pelicula: ");// Se lee el ID de la pelicula a buscar
                scanf("%d", &id);// Se almacena el ID de la pelicula a buscar
                for(i = 0; i < numPeliculas; i++) {
                    if(pelicula[i].ID == id) { // Se compara el ID de la pelicula con el ID ingresado
                        printf("Ingrese el nuevo estado de la pelicula: "); // Se lee el nuevo estado de la pelicula
                        scanf("%s", status); // Se almacena el nuevo estado de la pelicula
                        strcpy(pelicula[i].status, status); // Se cambia el estado de la pelicula
                        printf("Estado de la pelicula actualizado.\n"); // Se imprime un mensaje de confirmacion
                        break;
                    }
                }
                if(i == numPeliculas) { // Si no se encuentra la pelicula se imprime un mensaje de error
                    printf("No se encontró la pelicula.\n");
                }
                break;
            case 5: // Se actualiza una pelicula
                system("cls");
                printf("Ingrese el ID de la pelicula: "); // Se lee el ID de la pelicula a buscar
                scanf("%d", &id);
                for(i = 0; i < numPeliculas; i++) { // Se recorre el arreglo de estructuras de peliculas para imprimir cada una
                    if(pelicula[i].ID == id) { // Se compara el ID de la pelicula con el ID ingresado
                        printf("Ingrese el nuevo nombre de la pelicula: "); // Se lee el nuevo nombre de la pelicula
                        scanf("%s", pelicula[i].nombre); // Se almacena el nuevo nombre de la pelicula
                        printf("Ingrese el nuevo año de creacion: "); // Se lee el nuevo año de la pelicula
                        scanf("%d", &pelicula[i].year); // Se almacena el nuevo año de la pelicula
                        printf("Ingrese el nuevo genero de la pelicula: "); // Se lee el nuevo genero de la pelicula
                        scanf("%s", pelicula[i].genero); // Se almacena el nuevo genero de la pelicula
                        printf("Pelicula actualizada.\n"); // Se imprime un mensaje de confirmacion
                        break;
                    }
                }
                if(i == numPeliculas) { // Si no se encuentra la pelicula se imprime un mensaje de error
                    printf("No se encontró la pelicula.\n"); 
                }
                break;
            case 6: // Se elimina una pelicula
                system("cls");
                printf("Ingrese el ID de la pelicula: "); // Se lee el ID de la pelicula a buscar
                scanf("%d", &id); // Se almacena el ID de la pelicula a buscar
                for(i = 0; i < numPeliculas; i++) { // Se recorre el arreglo de estructuras de peliculas para imprimir cada una
                    if(pelicula[i].ID == id) { // Se compara el ID de la pelicula con el ID ingresado
                        for(int j = i; j < numPeliculas - 1; j++) { // Se recorre el arreglo de estructuras de peliculas para imprimir cada una
                            pelicula[j] = pelicula[j+1]; // Se reemplaza la pelicula a eliminar con la siguiente
                        }
                        numPeliculas--;
                        printf("Pelicula eliminada.\n"); // Se imprime un mensaje de confirmacion
                        break;
                    }
                }
                if(i == numPeliculas) { // Si no se encuentra la pelicula se imprime un mensaje de error
                    printf("No se encontró la pelicula.\n");
                }
                break;
            case 7: // Se sale del programa
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion invalida.\n");
                break;
        }
    } while(opcion != 5); // Se repite el ciclo hasta que se ingrese la opcion 5

    return 0;
}