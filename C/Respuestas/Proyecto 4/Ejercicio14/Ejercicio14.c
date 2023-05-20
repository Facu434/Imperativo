#include <stdio.h>
typedef struct _persona {
char *nombre;
int edad;
float altura;
float peso;
} persona_t;

float peso_promedio (persona_t arr[], unsigned int longitud) {
    int c = 0;
    float p = 0;
    float prom;
    int lon;
    lon = longitud;
    while (c < lon) {
        p = p + arr[c].peso;
        c = c + 1;
    }
    prom = p / longitud;
    return prom;
}
persona_t persona_de_mayor_edad (persona_t arr[], unsigned int longitud) {
    int c = 0;
    float p = 0;
    int lon;
    int max;
    int g;
    lon = longitud;
    while (c < lon) {
        if (c < lon - 1) {
            p = arr[c].edad;
            if (p > arr[c + 1].edad) {
                max = p;
                g = c;
            } else {
                max = arr[c + 1].edad;
                g = c + 1;
            }
        } else {
            p = arr[c].edad;
            if (p > max) {
                max = p;
                g = c;
            } else {
                max = max;
            }
        }
        c = c + 1;
    }
    return arr[g];
}
persona_t persona_de_menor_altura (persona_t arr[], unsigned int longitud) {
    int c = 0;
    float p = 0;
    int lon;
    int min;
    int g;
    lon = longitud;
    while (c < lon) {
        if (c < lon - 1) {
            p = arr[c].altura;
            if (p < arr[c + 1].altura) {
                min = p;
                g = c;
            } else {
                min = arr[c + 1].altura;
                g = c + 1;
            }
        } else {
            p = arr[c].altura;
            if (p < min) {
                min = p;
                g = c;
            } else {
                min = min;
            }
        }
        c = c + 1;
    }
    return arr[g];
}
int main (void) {
persona_t p1 = {"Paola", 21, 1.85, 75};
persona_t p2 = {"Luis", 54, 1.75, 69};
persona_t p3 = {"Julio", 40, 1.70, 80};
unsigned int longitud = 3;
persona_t arr[] = {p1, p2, p3};
printf("El peso promedio es %f\n", peso_promedio(arr, longitud));
persona_t p = persona_de_mayor_edad(arr, longitud);
printf("El nombre de la persona con mayor edad es %s\n", p.nombre);
p = persona_de_menor_altura(arr, longitud);
printf("El nombre de la persona con menor altura es %s\n", p.nombre);
return 0;
}