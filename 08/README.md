Implementar función que libera la memoria solicitada de la siguiente manera

```c
int **vector = malloc(sizeof(int *));
*vector = malloc(sizeof(int));
**vector = 18;

vector = realloc(vector, sizeof(int*) * 2);
```

Como pregunta adicional, qué hay ahora en `**vector`?