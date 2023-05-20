/* Son tres programas distintos que pertenecen al ejercicio 3 asique decidi hacerlos todos en un solo ejecutable.
para probar cualquiera de los 3 programas solo hace falta comerntar los 2 restantes que uno NO quiere ejecutar. 
(1a)
#include <stdio.h>
int main (void)
{  
    int x;
    printf("Ingresa un x:\n ");
    scanf("%d", &x);
    x = 5;
    printf("El valor de x es : %d \n",x);
    return 0;
}
(1b)
#include <stdio.h>
int main (void)
{  
    int x,y;
    printf("Ingresa un x:\n ");
    scanf("%d", &x);
    printf("Ingresa un y:\n ");
    scanf("%d", &y);
    x = x + y;
    y = y + y;
    printf("El valor de x es : %d \n",x);
    printf("El valor de y es : %d \n",y);
    return 0;
}
(1c)*/
#include <stdio.h>
int main (void)
{  
    int x,y;
    printf("Ingresa un y:\n ");
    scanf("%d", &y);
    printf("Ingresa un x:\n ");
    scanf("%d", &x);
    y = y + y;
    x = x + y;
    printf("El valor de y es : %d \n",y);
    printf("El valor de x es : %d \n",x);
    return 0;
}