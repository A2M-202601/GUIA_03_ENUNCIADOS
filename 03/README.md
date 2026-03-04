Implementar función que libera la memoria solicitada de la siguiente manera

```c
int **vector = malloc(sizeof(int *));
*vector = malloc(sizeof(int));
```