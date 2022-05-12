#include "subasta.h"

// Metodos para la clase Subasta

void Subasta :: setLotes(vector<Lote> nuevosLotes) {
    lotes = nuevosLotes;
}

void Subasta :: setLote(Lote l, int nroLote) {
    lotes[nroLote] = l;
}

void Subasta :: ingresarOferta(Persona p, float monto, Lote l, int nroLote) {
    Oferta nuevaOferta(p, monto);

    if (lotes[nroLote].validarMayor(nuevaOferta) == 1) {
        cout << "La oferta hecha por $" << monto << " fue aceptada" << endl;
        lotes[nroLote].setMayorOferta(nuevaOferta);
    } else {
        cout << "La oferta hecha por $" << monto << " no fue aceptada" << endl;
    }
}

vector<Lote> Subasta :: getLotes() {
    return lotes;
}

int Subasta :: getCantidadLotes() {
    return cantidad;
}

void Subasta :: mostrarLotes() {
    cout << "Se imprimen los lotes en la subasta: " << endl;

    for (int i = 0; i < cantidad; i++) {
        cout << '\n' << '\n' << i+1 << ") -------------" << endl;
        lotes[i].printLote();
    }
}

void Subasta :: subastar() {
    cout << '\n' << "Items subastados: " << endl;
    for (int i = 0; i < cantidad; i++) {
        Lote lote = lotes[i];

        if (lote.getMayorOferta().getMontoOfertado()) {
            cout << '\n' << '\n' << "- " << lote.getNombreLote() << " vendido!" << endl;
            lote.printLote();
        }
    }
}
