#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double num1, num2;      // Usamos double para mayor precisión
    int opcion;
    char respuesta;

    do {
        // === Entrada de datos ===
        cout << "Ingrese el primer numero: ";
        cin >> num1;

        cout << "Ingrese el segundo numero: ";
        cin >> num2;

        // === Menú ===
        cout << "\nMENU DE OPERACIONES\n";
        cout << "1. Sumar\n";
        cout << "2. Restar\n";
        cout << "3. Multiplicar\n";
        cout << "4. Dividir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Formato de salida: 2 decimales
        cout << fixed << setprecision(2);

        // === Operaciones ===
        switch (opcion) {
            case 1:
                cout << "Resultado = " << (num1 + num2) << endl;
                break;

            case 2:
                cout << "Resultado = " << (num1 - num2) << endl;
                break;

            case 3:
                cout << "Resultado = " << (num1 * num2) << endl;
                break;

            case 4:
                if (num2 != 0) {
                    cout << "Resultado = " << (num1 / num2) << endl;
                } else {
                    cout << "Error: No se puede dividir entre cero." << endl;
                }
                break;

            default:
                cout << "Opcion no valida." << endl;
        }

        // === Repetir operación ===
        cout << "\n¿Desea realizar otra operacion? (S/N): ";
        cin >> respuesta;
        cin.ignore(10000, '\n');   // Limpia el buffer de entrada (evita problemas comunes)

    } while (respuesta == 'S' || respuesta == 's');

    return 0;
}