/*Son cuatro programas distintos que pertenecen al ejercicio 6 asique decidi hacerlos todos en un solo ejecutable.
Para probar cualquiera de los 4 programas solo hace falta comentar los 3 restantes que uno NO quiere ejecutar.
a-
#include <stdio.h>
int pedirEntero (void) {
int x;
printf("Escribe un numero cualquiera: \n");
scanf("%d", &x);
return x;
}
void imprimeEntero (int x) {
    printf("\n%d", x);
}
int main (void) {
    imprimeEntero(pedirEntero ());
    return 0;
}
b-
#include <stdbool.h>
#include <stdio.h>
bool pedirBooleano (void) {
bool x;
int temp;
char bst;
printf("Escribe la inicial de un booleano cualquiera (con minuscula): \n");
scanf("%s", &bst);
while (bst != 116 && bst != 102 && bst != 118) {
    printf("La letra ingresada es incorrecta, por favor ingresa la letra inicial de un booleano en minuscula: \n");
    scanf ("%s", &bst);
} if (bst != 102) {
    temp = 1;
 } else {
    temp = 0;
 }
x = temp;
return x;
}
void imprimeBooleano (bool x) {
    if (x != 0 ) {
       printf("True"); 
    } else {
    printf("False");
    }
}
int main (void) {
    imprimeBooleano(pedirBooleano());
    return 0;
}
c-
#include <stdio.h>
int pedirEntero (void) {
    int x,y,z,m;
    m = 0;
    printf("Ingresa un x:\n ");
    scanf("%d", &x);
    printf("Ingresa un y:\n ");
    scanf("%d", &y);
    printf("Ingresa un z:\n ");
    scanf("%d", &z);
    if (x<y) {
        m = x;
    }
    else   {
        m = y;
    }
    if (m>=z) {
        m = z;
    }
    return m;
}
void imprimeEntero (int m) {
    printf("\nEl valor mas chico es : %d", m);
}
int main (void) {
    imprimeEntero(pedirEntero ());
    return 0;
}
d-*/
#include <stdio.h>
void imprimeHola (void) {
    printf("Hola\n");
}
void imprimeChau (void) {
    printf("Chau\n");
}
int main () {
    imprimeHola();
    imprimeHola();
    imprimeChau();
    imprimeChau();
    return 0;
}