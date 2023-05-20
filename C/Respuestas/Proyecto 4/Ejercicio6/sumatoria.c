#include <stdio.h>
int sumatoria (int a[], int tam) {
    int c = 0;
    int resultado = 0;
    while (c < tam) {
        printf("Ingresa un numero:\n");
        scanf("%d",&a[c]);
        resultado = resultado + a[c];
        c = c + 1;
    }
    printf("La suma de los elementos es:%d \n", resultado);
    return 0;
} int main (void) {
      int tamanio = 0;
      printf("Ingresa el tamanio de el arreglo:\n");
      scanf("%d",&tamanio);
      int a[tamanio];
      sumatoria(a,tamanio);
}