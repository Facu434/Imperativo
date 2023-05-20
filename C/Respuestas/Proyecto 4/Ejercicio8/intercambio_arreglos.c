#include <stdio.h>
void imprimeArreglo (int a[], int tam) {
    int c = 0;
    while (c < tam) {
        printf("%d"" ", a[c]);
        c = c + 1;
    }
}
void pedirArreglo (int a[], int tam) {
    int c = 0;
    while (c < tam) {
        scanf("%d",&a[c]);
        c = c + 1;
    }
}
void intercambiar (int a[], int tam, int i, int j) {
    int x,y;
    x = a[i];
    y = a[j];
    a[j] = x;
    a[i] = y;
    printf("El arreglo queda asi:\n");
    imprimeArreglo(a,tam);
}
int main (void) {
    int tamanio = 0;
    int h,k;
    h = 0;
    k = 0;
    printf("Ingresa el tamanio de el arreglo:\n");
    scanf("%d",&tamanio);
    int a[tamanio];
    printf("Ingresa la posicion del arreglo que queres cambiar (-1)\n");
    scanf("%d",&h);
    printf("Ingresa la posicion del arreglo que vas a cambiar con la anterior (-1)\n");
    scanf("%d",&k);
    printf("Ingresa el arreglo:\n");
    pedirArreglo (a,tamanio);
    intercambiar (a,tamanio,h,k);
}