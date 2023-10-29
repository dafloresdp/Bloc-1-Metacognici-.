#include <iostream>
#include <cmath>
using namespace std;
int numero;


int main () {
    std::cout << "Quin és el resultat de la següent operació??: 2x3  ";

    std::cin >> numero;

if (numero  != 6)
   std::cout << " Segur? Prova una altra vegada!";

 if (numero == 6)
    std::cout << "Correcte!" << std::endl;


      std::cout << "Quin és el resultat de la següent operació??: 8x9  ";

    std::cin >> numero;

if (numero  != 72)
   std::cout << " Segur? Prova una altra vegada!";

 if (numero == 72)
  std:cout << "Has superat la prova!" << std::endl;
return 0;

}
