#ifndef SUBASTA
#define SUBASTA

#include <iostream>
#include <vector>

using namespace std;

class Persona {
private:
    string nombrePersona;

public:
    Persona() {
        nombrePersona = "no-name";
    }
    Persona(string nombre) {
        nombrePersona = nombre;
    }

    string getPersona();
    void setPersona(string);
    void printPersona();
};


class Oferta {
private:
    Persona ofertante;
    float montoOfertado;

public:
    Oferta(){
        Persona p("Agustin");
        ofertante = p;
        montoOfertado = 0.0;
    }

    Oferta(Persona newOfrt, float mto) {
        ofertante = newOfrt;
        montoOfertado = mto;
    }

    float getMontoOfertado();
    void printOferta();
};


class Lote {
private:
    Oferta mayorOferta;
    int numeroLote;
    string nombreLote;

public:
    Lote() {
        Persona per("no-name");
        Oferta ofertaVacia(per, 0.0);

        mayorOferta = ofertaVacia;
        numeroLote = 0;
        nombreLote = "Lote without name";
    }
    Lote(Oferta oferta, int nro, string n) {
         mayorOferta = oferta;
         numeroLote = nro;
         nombreLote = n;
    }

    Oferta getMayorOferta();
    int getNumeroLote();
    string getNombreLote();
    void printLote();
    bool validarMayor(Oferta);
};

#endif
