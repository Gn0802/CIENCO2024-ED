#include <iostream>
#include <string>

using namespace std;

struct Animal {
    string nome;
    string especie;
    int idade;
    float peso;
};

typedef Animal ListaAnimais[10];

int main() {
    ListaAnimais lista;

    for (int i = 0; i < 10; ++i) {
        cout << "Digite o nome do animal " << i + 1 << ": ";
        cin >> lista[i].nome;

        cout << "Digite a especie do animal " << i + 1 << ": ";
        cin >> lista[i].especie;

        cout << "Digite a idade do animal " << i + 1 << ": ";
        cin >> lista[i].idade;

        cout << "Digite o peso do animal " << i + 1 << " em kg: ";
        cin >> lista[i].peso;
    }

    cout << "\nInformacoes dos animais:\n";
    for (int i = 0; i < 10; ++i) {
        cout << "\nAnimal " << i + 1 << ":\n";
        cout << "Nome: " << lista[i].nome << endl;
        cout << "Especie: " << lista[i].especie << endl;
        cout << "Idade: " << lista[i].idade << " anos" << endl;
        cout << "Peso: " << lista[i].peso << " kg" << endl;
    }


}
