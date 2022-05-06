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
    Oferta() {
        Persona p;
        ofertante = p;
        montoOfertado = 0.0;
    }
    Oferta(Persona newOfrt, float mto) {
        ofertante = newOfrt;
        montoOfertado = mto;
    }

    Persona getOfertante();
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
        Oferta ofertaVacia;
        mayorOferta = ofertaVacia;

        numeroLote = 0;
        nombreLote = "Lote without name";
    }
    Lote(int nro, string n) {
        Oferta ofertaVacia;
        mayorOferta = ofertaVacia;
        numeroLote = nro;
        nombreLote = n;
    }

    Oferta getMayorOferta();
    int getNumeroLote();
    string getNombreLote();
    
    void setMayorOferta(Oferta);
    
    void printLote();
    bool validarMayor(Oferta);
};

class Subasta {
private:
    vector<Lote> lotes;
    int cantidad;

public:
    Subasta(int numeroLotes) {
        Lote l;
        cantidad = numeroLotes;

        vector<Lote> ls(cantidad, l);
        lotes = ls;
    }

    vector<Lote> getLotes();
    int getCantidadLotes();
    void mostrarLotes();

    void setLotes(vector<Lote>);
    void setLote(Lote, int);
    
    /**
     * Este metodo checkea si la oferta ingresada para
     * un item (Lote) en cuestion es lo suficientemente
     * buena para reemplazar la oferta actual.
     */
    void ingresarOferta(Persona, float, Lote, int);
};

#endif
