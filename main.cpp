#include "subasta.h"

int main()
{
        // Probando la clase Persona y sus metodos
    cout << "Hello world! Vamos a inicializar una persona..." << endl;
    Persona p1("Agustin");
    cout << '\t' << "Persona inicializada!" << endl;

    cout << endl << "Ahora vamos a mostrar quien es la pesona: " << endl;
    p1.print();

    cout << endl << "Vamos a setear un nuevo valor a la clase pesona: " << endl;
    p1.setPersona("Celeste");
    cout << '\t' << "Persona inicializada!" << endl;

    cout << endl << "Veamos que nombre tiene ahora la clase: " << endl;
    p1.print();

        // Probando la clase Oferta
    cout << endl << "Vamos a inicializar una oferta..." << endl;
    Oferta c(p1, 1200);
    cout << '\t' << "Oferta inicializada!" << endl;

    cout << endl << "Ahora vamos a mostrar la oferta: " << endl;
    c.printOferta();

    return 0;
}
