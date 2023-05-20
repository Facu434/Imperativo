#include <stdio.h>
#include <stdbool.h>
bool existe_positivo (int a[], int tam) {
    int c = 0;
    bool condicion;
    while (c < tam) {
        printf("Ingresa un numero:\n");
        scanf("%d",&a[c]);
        if (a[c] > 0) {
            c = tam;
            condicion = true;
        } else {
            c = c + 1;
            condicion = false;
        }
    }
    if (condicion == true) {
        printf("Existe al menos un numero positivo\n");
    } else {
        printf("No existe ningun numero positivo\n");
    }
    return 0;
}
bool todos_positivos (int a[], int tam) {
     int c = 0;
     bool condicion;
     while (c < tam) {
        printf("Ingresa un numero:\n");
        scanf("%d",&a[c]);
        if (a[c] < 0) {
            c = tam;
            condicion = false;
        } else {
            c = c + 1;
            condicion = true;
        }
     }
     if (condicion == true) {
        printf("Todos los numeros son positivos\n");
     } else {
        printf("No todos los numeros son positivos\n");
     }
     return 0;
}
int main (void) {
    int tamanio = 0;
    int x;
    printf("Ingresa el tamanio de el arreglo:\n");
    scanf("%d",&tamanio);
    int a[tamanio];
    printf("Si queres usar la funcion todos positivos ingresa 1, si queres usar la funcion existe positivo ingresa 0:\n");
    scanf("%d", &x);
    while (x != 1 && x != 0) {
        printf("El numero ingresado es incorrecto, por favor si queres usar la funcion todos positivos ingresa 1, si queres usar la funcion existe positivo ingresa 0:\n");
        scanf("%d",&x);
    }
    if (x == 1) {
        todos_positivos (a,tamanio);
    } else {
        existe_positivo (a,tamanio);
    }

}