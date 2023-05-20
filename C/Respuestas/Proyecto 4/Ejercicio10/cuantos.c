#include <stdio.h>
struct comp_t {
int menores;
int iguales;
int mayores;
};
struct comp_t cuantos (int a[], int tam, int elem) {
    struct comp_t cuant;
    int num;
    int contMen = 0;
    int contI = 0;
    int contMay = 0;
    int c = 0;
    while (c < tam) {
        num = a[c];
         if (num < elem) {
            cuant.menores = contMen = contMen + 1;
        }
         if (num == elem) {
            cuant.iguales = contI = contI + 1;
        }
        if (num > elem) {
            cuant.mayores = contMay = contMay + 1;
        }
        c = c + 1;
    }
    if (contMen == 0) {
        cuant.menores = 0;
    } 
    if (contI == 0) {
        cuant.iguales = 0;
    }
    if (contMay == 0) {
        cuant.mayores = 0;
    }
    return cuant;
}
void pedirArreglo (int a[], int tam) {
    int c = 0;
    while (c < tam) {
        scanf("%d",&a[c]);
        c = c + 1;
    }
}
int main (void) {
    int tamanio,elemento;
    printf("Ingresa el tamanio del arreglo:\n");
    scanf("%d", &tamanio);
    printf("Ingresa el elemento a comparar:\n");
    scanf("%d", &elemento);
    int a[tamanio];
    printf("Ingresa el arreglo:\n");
    pedirArreglo(a,tamanio);
    printf("Hay %d numero/s mayores al elemento\n",cuantos(a,tamanio,elemento).mayores);
    printf("Hay %d numero/s iguales al elemento\n",cuantos(a,tamanio,elemento).iguales);
    printf("hay %d numero/s menores al elemento",cuantos(a,tamanio,elemento).menores);
    return 0;
}