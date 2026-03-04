Implementar función que libera la memoria solicitada de la siguiente manera

```c
int **vector = malloc(sizeof(int *) * 2);
*(vector) = malloc(sizeof(int));
*(vector+1) = malloc(sizeof(int));
```

    
