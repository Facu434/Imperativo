/*Son tres programas distintos que pertenecen al ejercicio 4 asique decidi hacerlos todos en un solo ejecutable.
Para probar cualquiera de los 3 programas solo hace falta comentar los 2 restantes que uno NO quiere ejecutar.
(1e)
#include <stdio.h>
int main (void)
{  
    int x,y;
    x = 3;
    y = 1;
    if (x>=y) {
        x = 0;
    }
    else   {
        x = 2;
    }
    printf("El valor de x es : %d \n",x);
    printf("El valor de y es : %d \n",y);
    return 0;
} 
(1f)
#include <stdio.h>
int main (void)
{  
    int x,y;
    x = -100;
    y = 1;
    if (x>=y) {
        x = 0;
    }
    else   {
        x = 2;
    }
    printf("El valor de x es : %d \n",x);
    printf("El valor de y es : %d \n",y);
    return 0;
}
b-*/
#include <stdio.h>
int main (void)
{  
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
    printf("El valor de m es : %d \n",m);
    return 0;
} 