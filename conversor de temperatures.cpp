#include <iostream>
using namespace std;
int main() {
float kel;
float fah;
float numero;

cout <<"Introdueix una quantitat en graus Celsius: "<<endl;
cin >>numero;
fah =numero * 9 / 5 * 32;
kel= numero +274.15;
cout<<"La seva equivalencia es: "<< kel <<" graus Kelvin"<<endl;
cout <<"La seva equivalencia es: "<<fah<<" graus Fahrenheit"<<endl;
return 0;

}
