#include <iostream>

using namespace std;

int main() {
    const int tamanhoVetor = 10;
    int vetorA[tamanhoVetor];
    int vetorM[tamanhoVetor];
    int valorX;


    cout << "Digite os " << tamanhoVetor << " elementos do vetor A:\n";
    for (int i = 0; i < tamanhoVetor; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetorA[i];
    }


    cout << "\nDigite um numero para multiplicar os elementos do vetor A: ";
    cin >> valorX;


    for (int i = 0; i < tamanhoVetor; ++i) {
        vetorM[i] = vetorA[i] * valorX;
    }


    cout << "\nVetor M (resultante da multiplicacao):\n";
    for (int i = 0; i < tamanhoVetor; ++i) {
        cout << vetorM[i] << " ";
    }

}
