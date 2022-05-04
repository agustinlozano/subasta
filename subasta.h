#ifndef SUBASTA
#define SUBASTA

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Persona {
private:
    vector <string> nombre;
    string nombrePersona;

public:
    Persona() {
        nombrePersona = "no-name";
    }
    Persona(string nombre) {
        nombrePersona = nombre;
    }

    void print();
    void setPersona(string nombre);
};


class Oferta {
private:
    Persona ofertante;
    float monto;

public:
    Oferta(){
        Persona p("Agustin");
        ofertante = p;
        monto = 0;
    }

    Oferta(Persona newOfrt, float mto) {
        ofertante = newOfrt;
        monto = mto;
    }

    void printOferta();
};

#endif
