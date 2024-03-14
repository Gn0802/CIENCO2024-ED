#include <iostream>

int main() {
    using namespace std;

    const int tamanho = 10;
    int vetor[tamanho];


    cout << "Digite 10 valores inteiros:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vetor[i];
    }


    cout << "\nConteúdo do vetor na ordem normal:\n";
    int *ptr = vetor;
    for (int i = 0; i < tamanho; ++i) {
        cout << *ptr << " ";
        ptr++;
    }


    cout << "\nConteúdo do vetor na ordem inversa:\n";
    ptr = vetor + tamanho - 1;
    for (int i = 0; i < tamanho; ++i) {
        cout << *ptr << " ";
        ptr--;
    }

}
