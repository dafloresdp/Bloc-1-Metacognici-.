//aquest codi, al insertar un número de l'1 al 10, et diu la taula de multiplicar corresponent a aquest.

#include <iostream>
int main() {
    string numero;


    std::cout << "Introdueix el t ";
    std::cin >> numero;

    std::cout << "Taula de multiplicar del " << numero << ":\n";

    for (int i = 1; i <= 10; ++i) {
        int resultat = numero * i;
        std::cout << numero << " x " << i << " = " << resultat << std::endl;
    }

    return 0;
}


