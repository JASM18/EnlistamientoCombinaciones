#include <iostream>
#include <fstream>

#include "CapturaSegura.hpp"
#include "OrdenLex.hpp"

#define MAX_FACT 1754

using namespace std;

int main() {
    int n, r;

    cout << "ALGORITMO PARA ENLISTAR COMBINACIONES" << endl;
    cout << "Combinaciones de n en r" << endl << endl;

    do {
        CapturarNumero(n, "Tamano del conjunto A? [1 <= n]: ");
    } while (n < 1 || n > MAX_FACT);

    cout << "n = " << n << endl;

    do {
        CapturarNumero(r, "Tamano de las combinaciones? [0 <= r <= n]: ");
    } while (r < 0 || r > n);

    cout << "r = " << r << endl;

    OrdenLexicografico(n, r);

    system("pause");
    return 0;
}

