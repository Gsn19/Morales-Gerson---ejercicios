#include <iostream>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

int buscarPorNombre(const vector<string>& nombres, const string& nombreBuscado) {
    for (size_t i = 0; i < nombres.size(); ++i) {
        if (nombres[i] == nombreBuscado) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<string> nombres;
    vector<string> ciudades;
    vector<int> dias, meses, anos;

    char opcion;
    do {
        string nombre, ciudad;
        int dia, mes, ano;

        cout << "Ingrese los datos de la persona:" << endl;
        cout << "Nombre: ";
        cin >> nombre;
        nombres.push_back(nombre);

        cout << "Ciudad: ";
        cin >> ciudad;
        ciudades.push_back(ciudad);

        cout << "Fecha de nacimiento (dia mes ano): ";
        cin >> dia >> mes >> ano;
        dias.push_back(dia);
        meses.push_back(mes);
        anos.push_back(ano);

        cout << "¿Desea ingresar los datos de otra persona? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    cout << "\nRegistro completo. Detalles de las personas:" << endl;

    for (size_t i = 0; i < nombres.size(); ++i) {
        cout << "Persona " << i + 1 << ":" << endl;
        cout << "Nombre: " << nombres[i] << endl;
        cout << "Ciudad: " << ciudades[i] << endl;
        cout << "Fecha de nacimiento: " << dias[i] << "/" << meses[i] << "/" << anos[i] << endl;

        time_t t = time(NULL);
        tm* timePtr = localtime(&t);
        int anoActual = 1900 + timePtr->tm_year;
        int mesActual = 1 + timePtr->tm_mon;
        int diaActual = timePtr->tm_mday;

        int edad = anoActual - anos[i];
        if (mesActual < meses[i] || (mesActual == meses[i] && diaActual < dias[i])) {
            edad--;
        }
        cout << "¿Es mayor de edad? " << (edad >= 18 ? "Si" : "No") << endl;
        cout << endl;
    }

    cout << "Ingrese el nombre para buscar detalles (o 'salir' para terminar): ";
    string nombreBusqueda;
    cin >> nombreBusqueda;

    while (nombreBusqueda != "salir") {
        int indice = buscarPorNombre(nombres, nombreBusqueda);

        if (indice != -1) {
            cout << "\nDetalles de la persona encontrada:" << endl;
            cout << "Nombre: " << nombres[indice] << endl;
            cout << "Ciudad: " << ciudades[indice] << endl;
            cout << "Fecha de nacimiento: " << dias[indice] << "/" << meses[indice] << "/" << anos[indice] << endl;
            cout << endl;
        } else {
            cout << "Persona no encontrada." << endl;
        }

        cout << "Ingrese el nombre para buscar detalles (o 'salir' para terminar): ";
        cin >> nombreBusqueda;
    }

    return 0;
}
