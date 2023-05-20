#include <stdio.h>
#include <stdbool.h>
int nesimo_primo (int N) {
    int cont = 2;
    bool primo = true;
    if (N == 0 || N == 1) {
        primo = false;
    }
    while (cont < N && primo) {
        primo = primo && (N % cont != 0);
        cont = cont + 1;
    }
    if (primo == true){
        printf("El numero es primo");
    } else {
        printf("El numero no es primo");
    }
    return 0;
}
int main (void) {
    int numero;
    printf("Ingresa un numero a comprobar:\n");
    scanf("%d",&numero);
    while (numero < 0) {
        printf("El numero no es valido, por favor ingresa un numero positivo:\n");
        scanf("%d",&numero);
    }
        nesimo_primo(numero);
    return 0;
}