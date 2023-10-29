#include <iostream>
using namespace std;

int main () {

int a, b, aux;

cout << "Introdueix valor variable a: ";
cin >>a;
cout << " Introdueix valor variable b: ";
cin>> b;

aux = a;
a = b;
b = aux;
cout << "You've been pranked! A value: " << a << endl;
cout << "You've been pranked! B value: " << b << endl;
}
