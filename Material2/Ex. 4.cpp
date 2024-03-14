#include <iostream>

using namespace std;

int main() {
    const int tamanhoVetor = 20;
    int vetorNumeros[tamanhoVetor];


    cout << "Digite 20 numeros:\n";
    for (int i = 0; i < tamanhoVetor; ++i) {
        cout << "Numero " << i + 1 << ": ";
        cin >> vetorNumeros[i];
    }


    cout << "\nNumeros na ordem inversa:\n";
    for (int i = tamanhoVetor - 1; i >= 0; --i) {
        cout << vetorNumeros[i] << " ";
    }


}
