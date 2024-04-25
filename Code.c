#include <stdio.h>

typedef struct {
    int tipo;
} Figura;

typedef struct {
    Figura figura;
    int largura;
    int altura;
} Retangulo;

int calcularAreaRetangulo(Retangulo retangulo) {
    return retangulo.largura * retangulo.altura;
}

void imprimirArea(Figura figura) {
    if (figura.tipo == 1) {
        Retangulo retangulo = *(Retangulo*)&figura;
        int area = calcularAreaRetangulo(retangulo);
        printf("Área do retângulo: %d\n", area);
    } else {
        printf("Figura não suportada!\n");
    }
}
