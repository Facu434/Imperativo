#include <stdio.h>
#include <assert.h>
int main (void) {
    int x,y,z;
    printf("Ingresa la variable x:\n");
    scanf("%d",&x);
    printf("Ingresa la variable y:\n");
    scanf("%d",&y);
    int a = x;
    int b = y;
    assert (a == x && b == y);
    z = x;
    x = y;
    y = z;
    assert (b == x && a == y);
    printf("Los resultados son: x = %d e y = %d\n",x,y);
}