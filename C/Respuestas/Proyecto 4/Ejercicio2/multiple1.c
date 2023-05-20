#include <stdio.h>
/*(2)(b)*/
int main (void) {
    int x,y,xaux;
    printf("Ingresa la primer variable:\n");
    scanf("%d",&y);
    printf("Ingresa la segunda variable:\n");
    scanf("%d",&x);
    xaux = x;
    x = x + 1;
    y = xaux + y;
    printf("Los resultados son: x = %d e y = %d\n",x,y);
}