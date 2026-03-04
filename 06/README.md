Implementar función que libera la memoria solicitada de la siguiente manera

```c
pokemon_t* poke = malloc(sizeof(pokemon_t));
poke->nombre = malloc(sizeof(char) * MAX_NOMBRE);
poke->tipo = malloc(sizeof(char) * MAX_TIPO);
```
