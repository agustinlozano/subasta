#include "subasta.h"

// Metodos para la clase Lote
void Lote :: setMayorOferta(Oferta nuevaOferta) {
    mayorOferta = nuevaOferta;
}

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
