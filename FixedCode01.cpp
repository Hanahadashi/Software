#include <iostream>

using namespace std;

class Forma {
public:
    virtual float calculateArea() const = 0;
};

class Circulo : public Forma {
private:
    float raio;
    const float pi = 3.14;

public:
    Circulo(float r) : raio(r) {}
    float getraio() const{
        return raio;
    }
    float getPI() const{
        return pi;
    }
};

class CirculoAreaCalculator {
public:
    float calculateArea(const Circulo& circulo) const {
        float raio = circulo.getraio();
        float pi = circulo.getPI();
        return raio * raio * pi;
    }
};

class Quadrado : public Forma {
private:
    float lado;

public:
    Quadrado(float s):lado(s) {}

    float getLado() const{
        return lado;
    }
};

class QuadradoAreaCalculator {
public:
    float calculateArea(const Quadrado& Quadrado) const {
        float lado = Quadrado.getLado();
        return lado * lado;
    }
};


class Printer {
public:
    void printArea(const Forma& forma) const {
        cout << "A área da forma é: " << forma.calculateArea() << endl;
    }
};
