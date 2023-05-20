#include <stdbool.h>
#include <stdio.h>
int main (void)
{  
    bool b, w;
    w = true;
    b = true;
    int x,y,z;
    printf("Ingresa un x:\n ");
    scanf("%d", &x);
    printf("Ingresa un y:\n ");
    scanf("%d", &y);
    printf("Ingresa un z:\n ");
    scanf("%d", &z);
    printf("El resultado de x % 4 = %d\n", (x % 4 == 0));
    printf("El resultado de x + y == 0 && y - x == (-1) * z = %d\n", (x + y == 0 && y - x == (-1) * z));
    printf("El resultado de not b && w es = %d\n",!(b && w));
    return 0;
}