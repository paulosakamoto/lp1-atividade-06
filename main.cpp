#include <iostream>

using namespace std;

int main() {
    const int inicio = 0, fim = 10;
    int i, numero, valorMultiplicado;

    cout << "Programa que exibe a tabuada de um número." << endl;
    cout << "Digite um número: ";
    cin >> numero;
    cout << endl;

    cout << "----------------" << endl;
    for(i  = inicio; i <= fim; i++) {
        valorMultiplicado = numero * i;
        cout << numero << "x" << i << " = " << valorMultiplicado << endl;
    }
    cout << "----------------" << endl;

    return 0;
}
