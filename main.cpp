#include "subasta.h"

int main()
{
        // Probando la clase Persona y sus metodos
    cout << "1) Vamos a inicializar una persona..." << endl;
    Persona p1("Agustin");
    cout << '\t' << "Persona inicializada!: " << p1.getPersona() << endl;

    cout << endl << "Ahora vamos a mostrar quien es la persona: " << endl;
    p1.printPersona();

    cout << endl << "Vamos a setear un nuevo valor a la clase persona: " << endl;
    p1.setPersona("Celeste");
    cout << '\t' << "Persona inicializada!: " << p1.getPersona() << endl;

    cout << endl << "Veamos que nombre tiene ahora la clase: " << endl;
    p1.printPersona();

        // Probando la clase Oferta
    cout << endl << "2) Vamos a inicializar una oferta..." << endl;
    Oferta oft(p1, 1200);
    cout << '\t' << "Oferta inicializada!" << endl;

    cout << endl << "Ahora vamos a mostrar la oferta: " << endl;
    oft.printOferta();

        // Probando la clase Lote
    cout << endl << "3) Ahora vamos a inicializar la clase Lote con el constructor sin parametros: " << endl;
    Lote lote1;
    cout << '\t' << "Lote inicializado!" << endl;

    cout << endl << "Veamos el contenido de nuestra clase lote: " << endl;
    lote1.printLote();

    cout << endl << "Ahora vamos a inicializar la clase Lote con el constructor parametrizado: " << endl;
    Lote lote2(oft, 1, "Remera");
    cout << '\t' << "Lote inicializado!" << endl;

    cout << endl << "Veamos el contenido de nuestra nueva clase lote: " << endl;
    lote2.printLote();

    cout << endl << "Accedemos a los campos del lote mediante los metodos get: "
    << lote2.getNombreLote() << ", " << lote2.getNumeroLote() << endl;

    cout << endl << "Ahora vamos a inicializar una ofeta nueva para poder utilizar el metodo de validacion.";
    cout << endl << "Esta oferta sera mayor, con lo cual el metodo de validacion deberia retornar true (1)" << endl;
    Oferta oft2(p1, 1500);

    cout << endl << "resultado: " << lote2.validarMayor(oft2) << endl;

    return 0;
}
