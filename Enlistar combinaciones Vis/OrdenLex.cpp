#include <iostream>
#include <fstream>

using std::cout;
using std::endl;

void OrdenLexicografico(int n, int r)
{
    std::ofstream archivo;

    while (true) {
        archivo.open("combinaciones.csv", std::ios::out); // Intentamos abrir en modo escritura

        if (!archivo) {
            std::cerr << "Error: El archivo esta en uso o no se puede abrir. Cierra el archivo e intenta de nuevo." << endl;
            system("pause");
        }else{
            break; // Salimos del bucle si el archivo se abre correctamente
        }
    }

    if (n >= 1 && 0 <= r && r <= n) {

        // Caso especial cuando r = 0
        if (r == 0) {
            archivo << "No hay combinaciones posibles";
            cout << "\nProceso terminado pero no hay combinaciones posibles para r = 0.\n" << endl;
            cout << "Datos guardados en combinaciones.csv\n" << endl;
            return;
        }

        cout << "\nProcesando..." << endl;

        // Reservar memoria para el arreglo que almacenará la combinación actual
        int* s = new int[r];

        // Inicializar el arreglo con la primera combinación
        for (int i = 0; i < r; i++) {
            s[i] = i + 1;
        }

        // Imprimir la primera combinación
        do {
            for (int i = 0; i < r; i++) {
                archivo << s[i] << ",";
            }
            archivo << endl;

            // Generar la siguiente combinación
            int m = r - 1;

            while (m >= 0 && s[m] == n - r + m + 1) {
                m--;
            }

            if (m >= 0) {

                s[m]++;
                for (int j = m + 1; j < r; j++) {
                    s[j] = s[j - 1] + 1;
                }

            }else{
                break; // No hay más combinaciones posibles
            }

        } while (true);

        cout << "Proceso terminado!\n" << endl;
        cout << "Datos guardados en combinaciones.csv\n" << endl;

        delete[] s;
    }
    else {
        cout << "Input inválido. Verifique que [0 <= r <= n] y [n > 0]" << endl;
    }

    archivo.close();
}
