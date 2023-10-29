#include <iostream>
using namespace std;

int main () {
string bye, adeu, hola, aux;
cout <<"inseriu les paraules hola adeu y bye: ";
cin >>hola>>adeu>>bye;
aux = hola;
hola = bye;
bye = adeu;
adeu = aux;
cout <<hola<<" "<<bye << " "<< adeu<< endl;

}




