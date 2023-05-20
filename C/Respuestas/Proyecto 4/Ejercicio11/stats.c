#include <limits.h>
#include <stdio.h>
struct datos_t {
float maximo;
float minimo;
float promedio;
};
struct datos_t stats (float a[], int tam) {
    struct datos_t datos;
    float min,max,prom,elemento;
    float elementoAnt = 2147483647;
    float minimoAnt = 2147483647;
    float maxAnt = -147483647;
    float sumatoria = 0;
    int c = 0;
    while (c < tam) {
        elemento = a[c];
        sumatoria = sumatoria + elemento;
        if (elemento < elementoAnt) {
            min = elemento;
            max = elemento;
        } else {
            min = elemento;
            max = elemento;
        }
        elementoAnt = elemento;
        if (min < minimoAnt) {
           datos.minimo = min = min;
        } else {
           datos.minimo = min = minimoAnt;
        }
        minimoAnt = min;
        if (max > maxAnt) {
            datos.maximo = max = max;
        } else {
            datos.maximo = max = maxAnt;
        }
        maxAnt = max;
        c = c + 1;
    }
    datos.promedio = prom = sumatoria / tam;
    return datos;
}
void pedirArreglo (float a[], int tam) {
    int c = 0;
    while (c < tam) {
        scanf("%f",&a[c]);
        c = c + 1;
    }
}
int main (void) {
    int tamanio;
    printf("Ingresa el tamanio del arreglo:\n");
    scanf("%d", &tamanio);
    float a[tamanio];
    printf("Ingresa el arreglo:\n");
    pedirArreglo (a,tamanio);
    printf("El maximo elemento del arreglo es: %f\n", stats(a,tamanio).maximo);
    printf("El minimo elemento del arreglo es: %f\n", stats(a,tamanio).minimo);
    printf("El promedio del arreglo es: %f", stats(a,tamanio).promedio);
}