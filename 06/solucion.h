#include <stdlib.h>


const int MAX_NOMBRE = 10;
const int MAX_TIPO = 5;

typedef struct {
    int id;
    int nivel;
    char* nombre;
    char* tipo;
} pokemon_t;



void solucion(pokemon_t *poke);