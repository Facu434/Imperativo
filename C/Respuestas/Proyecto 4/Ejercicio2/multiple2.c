#include <stdio.h>
int main (void) {
    int x,y,z,xaux,yaux;
    printf("Ingresa la primera variable:\n");
    scanf("%d",&z);
    printf("Ingresa la segunda variable:\n");
    scanf("%d",&y);
    printf("Ingresa la tercera variable:\n");
    scanf("%d",&x);
    xaux = x;
    yaux = y;
    x = y;
    y = y + xaux + z;
    z = yaux + xaux;
    printf("Los resultados son: x = %d e y = %d y z = %d\n",x,y,z);
}