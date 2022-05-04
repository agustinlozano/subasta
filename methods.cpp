#include "subasta.h"

// Metodos para la clase persona
void Persona :: print() {
    cout << '\t' << "Nombre: " << nombrePersona << endl;
}

void Persona :: setPersona(string nombre) {
    nombrePersona = nombre;
}

// Metodos para la clase oferta
void Oferta :: printOferta() {
    cout << '\t' << "Ofertante" << endl;
    ofertante.print();
    cout << '\t' << "monto: " << monto << endl;
}
