#include <iostream>
#include <string>

using namespace std;

int main() {
    const int totalNomes = 10;
    string nomes[totalNomes];

    cout << "Digite os nomes das 10 pessoas:\n";
    for (int i = 0; i < totalNomes; ++i) {
        cout << "Nome " << i + 1 << ": ";
        getline(cin, nomes[i]);
    }

    string nomeBusca;
    cout << "\nDigite um nome para verificar se está na lista: ";
    getline(cin, nomeBusca);

    bool encontrado = false;
    for (int i = 0; i < totalNomes; ++i) {
        if (nomeBusca == nomes[i]) {
            encontrado = true;
            break;
        }
    }

    if (encontrado) {
        cout << "\nACHEI! O nome esta na lista.\n";
    } else {
        cout << "\nNAO ACHEI! O nome nao esta na lista.\n";
    }

}
