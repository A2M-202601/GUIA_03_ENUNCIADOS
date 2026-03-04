#include <stdlib.h>

const int MAX_NOMBRE = 10;
const int MAX_TIPO = 5;
const int MAX_POKES_INICIAL = 3;
const int MAX_POKES_NUEVO = 6;

typedef struct {
    int id;
    int nivel;
    char* nombre;
    char* tipo;
} pokemon_t;



void solucion(pokemon_t** pokes);