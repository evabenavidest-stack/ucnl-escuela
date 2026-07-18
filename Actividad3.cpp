#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char continuar;
    
    do {
        double precio, nuevoPrecio;
        
        cout << "Ingresa el precio del producto importado: ";
        cin >> precio;
        
        if (precio < 1500) {
            nuevoPrecio = precio * 1.11;
            cout << "El precio es inferior a $1,500. Se incrementa un 11%." << endl;
        } else {
            nuevoPrecio = precio * 1.08;
            cout << "El precio es $1,500 o superior. Se incrementa un 8%." << endl;
        }
        
        cout << fixed << setprecision(2);
        cout << "El nuevo precio del producto es: $" << nuevoPrecio << endl;
        
        cout << "\n¿Deseas calcular otro producto? (s/n): ";
        cin >> continuar;
        cout << endl;
        
    } while (continuar == 's' || continuar == 'S');
    
    cout << "Gracias por usar el programa. ¡Hasta luego!" << endl;
    
    return 0;
}