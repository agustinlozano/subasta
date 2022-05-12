#include "subasta.h"

void siguientePaso() {
  string respuesta = "";

  cout << '\n' << "Para continar ingrese cualquier valor: " << endl;
  cout << "> ";
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

    /* Codigo principal */
    cout << "SUBASTA DE ARTICULOS TECNOLOGICOS" << endl;

    techItems.setLotes(lotes);

    cout << '\n' << "- Se ingresan los siguientes lotes" << endl;
    siguientePaso();

    techItems.mostrarLotes();

    cout << '\n' << "- Las ofertas se toman de a tres tandas" << '\n'
    << "  cada tanda toma cuatro ofertas." << endl;

    cout << '\n' << "1) Primera tanda" << endl;
    siguientePaso();

    techItems.ingresarOferta(p2, 205000.0, lote5, 4);
    techItems.ingresarOferta(p1, 110000.0, lote2, 1);
    techItems.ingresarOferta(p3, 240000.0, lote7, 6);
    techItems.ingresarOferta(p4, 97000.0, lote1, 0);

    cout << '\n' << "Chequeamos los lotes actuales" << endl;
    siguientePaso();

    techItems.mostrarLotes();

    cout << '\n' << "2) Segunda tanda" << endl;
    siguientePaso();

    techItems.ingresarOferta(p2, 97500.0, lote1, 0);
    techItems.ingresarOferta(p1, 87000.0, lote6, 5);
    techItems.ingresarOferta(p3, 65000.0, lote3, 2);
    techItems.ingresarOferta(p4, 27000.0, lote8, 7);

    cout << '\n' << "Chequeamos los lotes actuales" << endl;
    siguientePaso();

    techItems.mostrarLotes();

    cout << '\n' << "3) Tercera tanda" << endl;
    siguientePaso();

    techItems.ingresarOferta(p2, 205005.0, lote5, 4);
    techItems.ingresarOferta(p1, 250000.0, lote7, 6);
    techItems.ingresarOferta(p3, 65000.0, lote3, 2);
    techItems.ingresarOferta(p4, 27000.0, lote8, 7);

    cout << '\n' << "- Las tres tandas de oferta han finalizado!";
    cout << '\n' << "- Finalmente, se subastan." << endl;
    siguientePaso();

    techItems.subastar();

    return 0;
}
