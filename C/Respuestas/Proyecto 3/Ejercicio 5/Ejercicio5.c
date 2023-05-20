/* Son cuatro programas distintos que pertenecen al ejercicio 5 asique decidi hacerlos todos en un solo ejecutable.
Para probar cualquiera de los 4 programas solo hace falta comentar los 3 restantes que uno NO quiere ejecutar.
(1h)
#include <stdio.h>
int main (void)
{  
    int i;
    printf("Ingresa un numero i positivo:\n ");
    scanf("%d", &i);
    while (i != 0) {
        i = i-1;
    }
    printf("El valor de i actual es : %d \n",i);
    return 0;
}
(1i) 
#include <stdio.h>
int main (void)
{  
    int i;
    printf("Ingresa un numero:\n ");
    scanf("%d", &i);
    while (i != 0) {
        i = 0;
    }
    printf("El valor final es : %d \n",i);
    return 0;
}
b-
(1) 
#include <stdio.h>
int main (void)
{  
    int x,y,i;
    printf("Ingresa un x:\n ");
    scanf("%d", &x);
    printf("Ingresa un y:\n ");
    scanf("%d", &y);
    i = 0;
    while (x >= y) {
        x = x - y;
        i = i + 1;
    }
    printf("El valor final de x es : %d \n",x);
    printf("El valor final de y es : %d \n",y);
    printf("El valor final de i es : %d \n",i);
    return 0;
} 
(2)*/
#include <stdbool.h>
#include <stdio.h>
int main (void)
{  
    int x, i;
    bool res;
    printf("Ingresa un x: \n ");
    scanf ("%d", &x);
    i = 2;
    res = true;
    while (i < x && res) {
        res = res && (x % i != 0);
        i = i + 1;
    }
    printf("El valor final de x es : %d \n",x);
    printf("El valor final de res es : %d \n",res);
    printf("El valor final de i es : %d \n",i);
    return 0;
}