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
    //cout << '\t' << "Nueva persona seteada: " << nombrePersona << endl;
}

// Metodos para la clase Oferta
float Oferta :: getMontoOfertado() {
  return montoOfertado;
}

void Oferta :: printOferta() {
    cout << '\t' << "- Ofertante" << endl;
    ofertante.printPersona();
    cout << '\t' << "Monto: " << montoOfertado << endl;
}

// Metodos para la clase Lote
bool Lote :: validarMayor(Oferta newOferta) {
    return newOferta.getMontoOfertado() > mayorOferta.getMontoOfertado();
}

Oferta Lote :: getMayorOferta() {
    return mayorOferta;
}

int Lote :: getNumeroLote() {
    return numeroLote;
}

string Lote :: getNombreLote() {
    return nombreLote;
}

void Lote :: printLote() {
    cout << '\t' << "- Lote" << '\n' << endl;
    cout << '\t' << "Nombre de lote: " << nombreLote << endl;
    cout << '\t' << "Numero de lote: " << numeroLote << '\n' << endl;
    mayorOferta.printOferta();
}
