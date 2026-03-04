#include <stdlib.h>

#define MAX_NOMBRE 10;
#define MAX_TIPO 5;
#define MAX_POKES 3;

typedef struct {
    int id;
    int nivel;
    char* nombre;
    char* tipo;
} pokemon_t;


void solucion(pokemon_t** pokes);