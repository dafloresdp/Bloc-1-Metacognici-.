#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Parell {
    string criatura;
    string joguina;
};

bool comp(Parell a, Parell b) {
    if (a.criatura != b.criatura) return a.criatura < b.criatura;
    return a.joguina < b.joguina;
}

int main() {
    int n;
    cin >> n; // Llegim el nombre de parells criatura/joguina

    // Creem un vector per emmagatzemar els parells criatura/joguina
    vector<Parell> parells(n);

    // Llegim els parells criatura/joguina
    for (int i = 0; i < n; ++i) {
        cin >> parells[i].criatura >> parells[i].joguina;
    }

    // Ordenem els parells
    sort(parells.begin(), parells.end(), comp);

    // Inicialitzem les variables per mantenir el seguiment del parell actual i del nombre d'aparicions
    Parell parellActual = parells[0];
    int aparicions = 1;

    // Recorrem els parells ordenats per comptar el nombre d'aparicions de cada parell
    for (int i = 1; i < n; ++i) {
        if (parells[i].criatura == parellActual.criatura && parells[i].joguina == parellActual.joguina) {
            aparicions++; // Si trobem el mateix parell, incrementem el nombre d'aparicions
        } else {
            // Si trobem un parell diferent, imprimim el nombre d'aparicions 
            cout << parellActual.criatura << " " << parellActual.joguina << " " << aparicions << endl;
            
            // Actualitzem el parell actual i reiniciem el comptador
            parellActual = parells[i];
            aparicions = 1;
        }
    }

    // Imprimim el nombre d'aparicions del darrer parell
    cout << parellActual.criatura << " " << parellActual.joguina << " " << aparicions << endl;

    return 0;
}
