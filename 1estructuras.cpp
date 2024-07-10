#include <iostream>
using namespace std;

struct contactoEmail {
    string nombrecompleto;
    string sexo;
    int edad;
    int telefono;
    string email;
    string nacionalidad;
};


int main() {
    const int max = 100;
    contactoEmail nuevocontacto[max];
    int n = 0; // Número de contactos
    char opcion;

    do {
    	cout << "************************************************************************************************************************************" << endl;
        cout << "MENU PRINCIPAL:" << endl << endl;
        cout << "a) Agregar un contacto." << endl;
        cout << "b) Eliminar un contacto." << endl;
        cout << "c) Mostrar listado general de contactos registrados hasta ese momento." << endl;
        cout << "d) Mostrar listado de contactos existentes, ordenado por servidor de correo de las cuentas (gmail.com, outlook.com, yahoo.com, etc.)" << endl;
        cout << "e) Salir del programa." << endl << endl;
        cout << "Indique a cual quiere ingresar: ";
        cin >> opcion;
        cout << endl;
		cout << "--------------------------------------" << endl;
        switch (opcion) {
            case 'a':
                if (n < max) {
                    cout << "AGREGANDO CONTACTO..." << endl << endl;
                    cout << "Nombre: ";
                    if (n >= 0) cin.ignore();
                    getline(cin, nuevocontacto[n].nombrecompleto);
                    cout << "Sexo: ";
                    cin >> nuevocontacto[n].sexo;
                    cout << "Edad: ";
                    cin >> nuevocontacto[n].edad;
                    cout << "Telefono: ";
                    cin >> nuevocontacto[n].telefono;
                    cout << "Email: ";
                    cin >> nuevocontacto[n].email;
                    cout << "Nacionalidad: ";
                    cin >> nuevocontacto[n].nacionalidad;
                    n++;
                } else {
                    cout << "No se pueden agregar mas contactos." << endl;
                }
                break;

            case 'b':

                break;

            case 'c':

                break;

            case 'd':
            	
                break;

            case 'e':
                break;

            default:
                break;
        }
        cout << endl;
    } while (opcion != 'e');

    return 0;
}
