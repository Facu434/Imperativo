#include <stdio.h>
#include <assert.h>
int main (void){
    int num,res;
    printf("Ingresa un numero\n");
    scanf("%d",&num);
    assert (num <= 0 || num >= 0);
    if (num >= 0) {
        res = num;
        printf("El valor absoluto es:%d\n", res);
    } else {
        res = -1 * num;
        printf("El valor absoluto es:%d\n", res);
    }
    assert (res >= 0);
}