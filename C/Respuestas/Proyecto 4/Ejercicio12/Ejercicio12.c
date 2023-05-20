#include <stdio.h>
#include <stdbool.h>
typedef char clave_t;
typedef int valor_t;
struct asoc {
clave_t clave;
valor_t valor;
};
bool asoc_existe (struct asoc a[], int tam, clave_t c) {
    bool tOf;
    bool tOfAnt = false;
    int cont = 0;
    clave_t cla;
    while (cont < tam) {
        printf("Ingresa una clave:\n");
        scanf(" %c", &a[cont].clave);
        cla = a[cont].clave;
        printf("Ingresa un numero asociado a esa clave:\n");
        scanf("%d",&a[cont].valor);
        if (cla == c) {
            tOf = true;
        } else {
            tOf = false;
        }
        tOfAnt = tOf || tOfAnt;
        cont = cont + 1;
    }
    if (tOfAnt == true) {
        printf("La clave existe en el arreglo de asociaciones\n");
    } else {
        printf("La clave no existe en el arreglo de asociaciones\n");
    }
    return tOfAnt;
}
int main (void) {
    int tamanio;
    clave_t c;
    printf("Ingresa el tamanio del arreglo:\n");
    scanf("%d",&tamanio);
    struct asoc a[tamanio];
    printf("Ingresa la clave de asociaciones a comparar:\n");
    scanf(" %c",&c);
    asoc_existe (a,tamanio,c);
}