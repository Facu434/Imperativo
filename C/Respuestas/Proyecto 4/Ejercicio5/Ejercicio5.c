#include <stdio.h>
void pedirArreglo (int a[], int n_max) {
    int c = 0;
    while (c < n_max) {
        scanf("%d",&a[c]);
        c = c + 1;
    }
}
void imprimeArreglo (int a[], int n_max) {
    int c = 0;
    while (c < n_max) {
        printf("%d"" ", a[c]);
        c = c + 1;
    }
}
int main (void) {
    int n;
    n = 0;
    printf("Que tamanio queres que tenga el arreglo?:\n");
    scanf("%d",&n);
    int a[n];
    printf("Ingresa un numero:\n");
    pedirArreglo (a,n);
    printf("Los numeros son:\n");
    imprimeArreglo(a,n);
}