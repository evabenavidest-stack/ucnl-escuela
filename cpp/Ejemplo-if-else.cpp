#include <iostream>
int main() {
    int n;
    std::cout << "Ingresa un numero: ";
    std::cin >> n;
    if (n > 0) {
        std::cout << "El numero es positivo." << std::endl;
    } else if (n < 0) {
        std::cout << "El numero es negativo." << std::endl;
    } else {
        std::cout << "El numero es cero." << std::endl;
    }
    return 0;
}