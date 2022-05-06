#include "subasta.h"

// Metodos para la clase Persona
string Persona :: getPersona() {
    return nombrePersona;
}

void Persona :: printPersona() {
    cout << '\t' << "Nombre: " << nombrePersona << endl;
}

void Persona :: setPersona(string newName) {
    nombrePersona = newName;
}

// Metodos para la clase Oferta
Persona Oferta :: getOfertante() {
    return ofertante;
}

float Oferta :: getMontoOfertado() {
    return montoOfertado;
}

void Oferta :: printOferta() {
    cout << '\t' << "- Ofertante" << endl;
    ofertante.printPersona();
    cout << '\t' << "Monto: " << montoOfertado << endl;
}
