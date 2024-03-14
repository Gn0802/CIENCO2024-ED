#include <iostream>

using namespace std;

int main() {
    int tamanhoVetores;


    cout << "Digite o tamanho dos vetores (N): ";
    cin >> tamanhoVetores;


    int vetorA[tamanhoVetores], vetorB[tamanhoVetores];
    cout << "Digite os elementos do vetor A (tamanho N):\n";
    for (int i = 0; i < tamanhoVetores; ++i) {
        cout << "Elemento A[" << i << "]: ";
        cin >> vetorA[i];
    }

    cout << "Digite os elementos do vetor B (tamanho N):\n";
    for (int i = 0; i < tamanhoVetores; ++i) {
        cout << "Elemento B[" << i << "]: ";
        cin >> vetorB[i];
    }


    int vetorSoma[tamanhoVetores];
    for (int i = 0; i < tamanhoVetores; ++i) {
        vetorSoma[i] = vetorA[i] + vetorB[i];
    }


    cout << "\nVetor Soma (A + B):\n";
    for (int i = 0; i < tamanhoVetores; ++i) {
        cout << vetorSoma[i] << " ";
    }


}
