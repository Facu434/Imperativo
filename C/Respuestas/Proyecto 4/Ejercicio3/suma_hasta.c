#include <stdio.h>
int suma_hasta (int n) {
    int aux;
    aux = 0;
    while (n != 0) {
        aux = aux + n;
        n = n - 1;
    } printf("La suma de todos los numeros hasta el numero dado es:%d \n",aux);
    return 0;
} int main (void) {
    int n;
    n = 0;
    printf("Ingresa un numero:\n");
    scanf("%d", &n);
    while (n < 0) {
        printf("El numero ingresado es incorrecto, por favor ingresa un numero positivo:\n");
        scanf("%d",&n);
    } suma_hasta(n);
}