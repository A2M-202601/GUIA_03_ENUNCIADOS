Implementar función que libera la memoria solicitada de la siguiente manera

```c
int** vector = malloc(MAX_LARGO * sizeof(int*));
   
for (int i = 0; i < MAX_LARGO; i++)
    vector[i] = malloc(sizeof(int));

for (int j = 0; j < MAX_LARGO; j++){
    *(vector[j]) = j;
}
```