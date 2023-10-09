#include <stdio.h>
#include <stdlib.h>
typedef struct {
    unsigned int a : 4; // 4 bits
    unsigned int b : 2; // 2 bits
    unsigned int c : 4;
    unsigned int d : 2;
    unsigned int e : 4;
    unsigned int f : 2;
    unsigned int g : 4;
    unsigned int h : 2;
    unsigned int i : 4;
    unsigned int j : 2;
} CampoBit; // Nombre de la estructura
int main(int argc, char *argv[]) { 
printf("Tamano de registro: %lu\n", sizeof(CampoBit));
return 0;
}