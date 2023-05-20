#include <stdio.h>
int main (void) {
    int x,y,z;
    printf("Ingresa un numero x: \n");
    scanf("%d", &x);
    printf("Ingresa un numero y: \n");
    scanf("%d", &y);
    printf("Ingresa un numero z: \n");
    scanf("%d", &z);
    printf("El resultado de x + y + 1 es:%d\n", x + y + 1);
    printf("El resultado de z * z + y * 45 - 15 * x es: %d\n", z * z + y * 45 - 15 * x);
    printf("El resultado de y - 2 == (x * 3 + 1) mod 5 es: %d \n", y - 2 == (x * 3 + 1) % 5);
    printf("El resultado de y / 2 * x es:%d\n", y / 2 * x);
    printf("El resultado de y < x * z es:%d\n", y < x * z);
}