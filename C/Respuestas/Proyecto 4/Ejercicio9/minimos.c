#include <limits.h>
#include <stdio.h>
int minimo_pares (int a[], int tam) {
    int min,elemento;
    int elementoAnt = 2147483647;
    int minimoAnt = 2147483647;
    int c = 0;
    while (c < tam) {
        scanf("%d", &a[c]);
        elemento = a[c];
        if (elemento % 2 == 0) {
            if (elemento < elementoAnt) {
                min = elemento;
            } else {
                min = elementoAnt;
            }
            elementoAnt = elemento;
            if (min < minimoAnt) {
                min = min;
            } else {
                min = minimoAnt;
            }
            minimoAnt = min;
        }
        c = c + 1;
    }
    return min;
}
int minimo_impares (int a[], int tam) {
    int min,elemento;
    int elementoAnt = 2147483647;
    int minimoAnt = 2147483647;
    int c = 0;
    while (c < tam) {
        elemento = a[c];
        if (elemento % 2 != 0) {
            if (elemento < elementoAnt) {
                min = elemento;
            } else {
                min = elementoAnt;
            }
            elementoAnt = elemento;
            if (min < minimoAnt) {
                min = min;
            } else {
                min = minimoAnt;
            }
            minimoAnt = min;
        }
        c = c + 1;
    }
    return min;
}
int main (void) {
    int result1,result2,tamanio;
    printf("Ingrese el tamanio del arreglo:\n");
    scanf("%d",&tamanio);
    int a[tamanio];
    printf ("Ingrese el arreglo:\n");
    result1 = minimo_pares (a,tamanio);
    result2 = minimo_impares (a,tamanio);
    if (result1 < result2) {
        printf("El minimo elemento es: %d", result1);
    } else {
        printf("El minimo elemento es: %d", result2);
    }
    return 0;
}