#include <stdio.h>
struct div_t {
    int cociente;
    int resto;
};
struct div_t division(int x, int y){
    struct div_t div;
    div.cociente = x / y;
    div.resto = x % y;
    return div;
}
int main (void) {
    int x,y;
    printf("Igresa un numero entero a dividir:\n");
    scanf("%d",&x);
    printf("Ahora ingresa un numero entero divisor:\n");
    scanf("%d",&y);
    if (y==0) {
        printf("El numero divisor ingresado es incorrecto\n");
    } else {
        printf("El resultado entero es: %d , y el resto es: %d \n", division(x,y).cociente ,division(x,y).resto);
    }
}