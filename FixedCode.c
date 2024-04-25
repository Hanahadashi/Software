#include <stdio.h>

typedef struct {
    float (*calcularArea)(void *);
} FormaGeometrica;

typedef struct {
    FormaGeometrica formaGeometrica;
    float largura;
    float altura;
} Retangulo;

typedef struct {
    FormaGeometrica formaGeometrica;
    float raio;
} Circulo;

float calcularAreaRetangulo(void *ret) {
    Retangulo *r = (Retangulo *)ret;
    return r->largura * r->altura;
}

float calcularAreaCirculo(void *circ){
    Circulo *c = (Circulo *)circ;
    return 3.14 * c->raio * c->raio;
}

void imprimirArea(FormaGeometrica *forma) {
    printf("Área: %.2f\n", forma->calcularArea(forma));
}
