    --Ejercicio de parcial--


Implementar función que libera la memoria solicitada de la siguiente manera

```c
int*** matriz = malloc(MAX_ALTO * sizeof(int**));

for (int i = 0; i < MAX_ALTO; i++)
    matriz[i] = malloc(MAX_ANCHO * sizeof(int*));

for (int i = 0; i < MAX_ALTO; i++) {
    int* numero = malloc(sizeof(int));

    for (int j = 0; j < MAX_ANCHO; j++){
        *numero = i+j;
        matriz[i][j] = numero;
        *numero = i*j;
    }
}
```

Se muestra a continuación un doble for para imprimir los elementos de la matriz

```c
for (int i = 0; i < MAX_ANCHO; i++){
    for (int j = 0; j < MAX_ALTO; j++){
        printf("%i\t", *(matriz[i][j]));
    }
    printf("\n");
}
```