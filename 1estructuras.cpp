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


// Función para eliminar un contacto
void eliminarProducto(contactoEmail arr[], int &n, int indice) {
    if (indice >= 0 && indice < n) {
        for (int i = indice; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        cout << endl;
        cout << "CONTACTO " << indice + 1<< " ELIMINADO CON EXITO!!" << endl;
    } else {
        cout << "Indice no valido" << endl;
    }
}


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
                if (n > 0) {
                    cout << "INDIQUE CUAL QUIERE ELIMINAR..." << endl << endl;
                    for (int i = 0; i < n; i++) {
                        cout << i + 1 << ". Contacto." << endl;
                        cout << "Nombre: " << nuevocontacto[i].nombrecompleto << endl;
                        cout << "Sexo: " << nuevocontacto[i].sexo << endl;
                        cout << "Edad: " << nuevocontacto[i].edad << endl;
                        cout << "Telefono: " << nuevocontacto[i].telefono << endl;
                        cout << "Email: " << nuevocontacto[i].email << endl;
                        cout << "Nacionalidad: " << nuevocontacto[i].nacionalidad << endl << endl;
                    }
                    cout << "Ingrese el numero del contacto a eliminar: ";
                    int indice;
                    cin >> indice;
                    eliminarProducto(nuevocontacto, n, indice - 1);
                } else {
                    cout << "No hay contactos para eliminar." << endl;
                }
                break;

            case 'c':
			    if (n > 0) {
                    cout << "LISTADO GENERAL DE CONTACTOS:" << endl << endl;
                    for (int i = 0; i < n; i++) {
                        cout << i + 1 << ". Contacto." << endl;
                        cout << "Nombre: " << nuevocontacto[i].nombrecompleto << endl;
                        cout << "Sexo: " << nuevocontacto[i].sexo << endl;
                        cout << "Edad: " << nuevocontacto[i].edad << endl;
                        cout << "Telefono: " << nuevocontacto[i].telefono << endl;
                        cout << "Email: " << nuevocontacto[i].email << endl;
                        cout << "Nacionalidad: " << nuevocontacto[i].nacionalidad << endl << endl;
                    }
                } else {
                    cout << "No hay contactos registrados." << endl;
                }
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
