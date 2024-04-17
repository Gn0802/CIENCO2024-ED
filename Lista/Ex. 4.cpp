#include <iostream>

using namespace std;

int main() {
    int vetor[10], *pVetor = vetor;

    cout << "Digite 10 numeros inteiros separados por espaco:" << endl;
    for (int i = 0; i < 10; i++) cin >> vetor[i];

    cout << endl << "Vetor normal: ";
    for (int i = 0; i < 10; i++) cout << *(pVetor + i) << " ";

    cout << endl << "Vetor inverso: ";
    for (int i = 9; i >= 0; i--) cout << *(pVetor + i) << " ";

    int maior = *pVetor, menor = *pVetor;
    for (int i = 1; i < 10; i++) {
        if (*(pVetor + i) > maior) maior = *(pVetor + i);
        if (*(pVetor + i) < menor) menor = *(pVetor + i);
    }

    cout << endl << "Maior valor: " << maior;
    cout << endl << "Menor valor: " << menor;

    float soma = 0.0;
    for (int i = 0; i < 10; i++) soma += *(pVetor + i);
    float media = soma / 10.0;

    cout << endl << "Media: " << media;

}
