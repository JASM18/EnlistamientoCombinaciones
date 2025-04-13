#include <iostream>
#include <fstream>

#include "CapturaSegura.hpp"
#include "OrdenLex.hpp"
#include "Combinaciones.hpp"

#define MAX_FACT 100

using namespace std;

int main() {
    int n, r;
    long double contGeneral = 0, contTeorico = 0;

    cout << "ALGORITMO PARA ENLISTAR COMBINACIONES" << endl;
    cout << "Combinaciones de n en r" << endl << endl;

    do {
        CapturarNumero(n, "Tamano del conjunto A? [1 <= n <= 100]: ");
		if (n < 1 || n > MAX_FACT) {
			cout << "Error: El valor de n debe estar entre 1 y " << MAX_FACT << "." << endl;
		}
    } while (n < 1 || n > MAX_FACT);

    cout << "n = " << n << endl;

    do {
        CapturarNumero(r, "Tamano de las combinaciones? [0 <= r <= n]: ");
        if (r < 0 || r > n) {
            cout << "Error: El valor de r debe estar entre 0 y " << n << "." << endl;
        }
    } while (r < 0 || r > n);

    cout << "r = " << r << endl;

    OrdenLexicografico(n, r, contGeneral);

	contTeorico = CalcComb(n, r);

    cout << "Conteo general: " << contGeneral << endl;
	cout << "Conteo teorico: " << contTeorico << endl;

    if (contGeneral == contTeorico) {
		cout << "Ambos conteos coinciden." << endl;
    }else{
        cout << "Los conteos no coinciden, ya que como r = " << r << ", entonces el conteo manual no detecto ni una combinaci" << (char) 162 << "n" << endl;
    }

    cout << "\n\n";
    system("pause");
    return 0;
}

