#include <stdio.h>
#include <assert.h>
int main (void) {
    int x,y,res;
    printf("Ingresa un primer numero:\n");
    scanf("%d", &x);
    printf("Ahora ingresa un segundo numero:\n");
    scanf("%d",&y);
    assert (x != y);
    if (x > y) {
        res = y;
        printf("El primer numero es mayor que el segundo\n");
    } else {
        res = x;
        printf("El segundo numero es mayor que el primero\n");
    }
    assert (res == x || res == y); 
}