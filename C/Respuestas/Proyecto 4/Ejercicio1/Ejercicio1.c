#include <stdio.h>
#include <assert.h>
int leeN (void) {
    int n;
    printf("Escribe un numero positivo:\n");
    scanf("%d", &n);
    return n;
} void holaHasta (int n) {
    assert ( n > 0);
    while (n > 0) {
        printf("Hola\n");
        n = n - 1;
    }
} int main (void) {
    holaHasta(leeN());
    return 0;
}