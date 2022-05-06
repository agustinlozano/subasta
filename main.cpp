#include "subasta.h"

void siguientePaso() {
  string respuesta = "";

  cout << '\n' << "Para continar ingrese cualquier valor" << endl;
  cin >> respuesta;
}

int main() {
    /* Creamos algunas personas las cuales
        participaran en la subasta */
    Persona p1("Agustin"), p2("Celeste"), p3("Vicente"), p4("Ninito");

    /* Creamos algunos lotes y luego
        los ultilizamos en nuestra clase Subasta */
    Lote lote1(0, "Laptop Dell Latitude i7"),
         lote2(1, "Monitor Samsung Odyssey G3"),
         lote3(2, "Microprocesador Ryzen 5"),
         lote4(3, "Teclado Apple Magic"),
         lote5(4, "Smartphone Iphone 13 mini"),
         lote6(5, "Cafetetera De'Longhi Dedica"),
         lote7(6, "Laptop MacBook pro 13\""),
         lote8(7, "Micro ordenador Raspberry Pi 4 Model B");

    vector<Lote> lotes(8);

    lotes[0] = lote1;
    lotes[1] = lote2;
    lotes[2] = lote3;
    lotes[3] = lote4;
    lotes[4] = lote5;
    lotes[5] = lote6;
    lotes[6] = lote7;
    lotes[7] = lote8;

    Subasta techItems(8);

    cout << " - SUBASTA DE ARTICULOS TECNOLOGICOS - " << endl;

    techItems.setLotes(lotes);

    siguientePaso();

    cout << '\n' << "- Probamos metodo mostrarLotes" << endl;
    techItems.mostrarLotes();

    siguientePaso();

    cout << '\n' << "- Probamos metodo ingresarOferta" << endl;
    techItems.ingresarOferta(p2, 205000.0, lote5, 4);

    siguientePaso();

    cout << '\n' << "- Probamos metodo mostrarLotes para checkear la nueva oferta" << endl;
    techItems.mostrarLotes();

    return 0;
}
