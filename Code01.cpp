#include <iostream>

using namespace std;

class Retangulo {
public:
    int largura,altura;

    void setLargura(int w) {
        largura = w;
    }

    void setAltura(int h) {
        altura = h;
    }

    int area() {
        return largura * altura;
    }
};

class Quadrado : public Retangulo {
public:
    void setLargura(int size) override {
        largura = size;
        altura = size;
    }

    void setAltura(int size) override {
        largura = size;
        altura = size;
    }
};

void printArea(Retangulo& r) {
    cout << "Area: " << r.area() << endl;
}

