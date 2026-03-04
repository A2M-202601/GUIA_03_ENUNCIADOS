Implementar función que libera la memoria solicitada de la siguiente manera

```c
pokemon_t** pokes = malloc(sizeof(pokemon_t*) * MAX_POKES_INICIAL);

for (int i = 0; i < MAX_POKES_INICIAL; i++) {
    pokemon_t* poke = malloc(sizeof(pokemon_t));
    poke->nombre = malloc(sizeof(char) * MAX_NOMBRE);
    poke->tipo = malloc(sizeof(char) * MAX_TIPO);

    pokes[i] = poke;
}

pokes = realloc(pokes, sizeof(pokemon_t*) * MAX_POKES_NUEVO);

for (int i = MAX_POKES_INICIAL; i < MAX_POKES_NUEVO; i++) {
    pokemon_t* poke = malloc(sizeof(pokemon_t));
    poke->nombre = malloc(sizeof(char) * MAX_NOMBRE);
    poke->tipo = malloc(sizeof(char) * MAX_TIPO);

    pokes[i] = poke;
}
```
