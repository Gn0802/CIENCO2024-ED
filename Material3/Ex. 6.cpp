#include <iostream>
#include <string>

using namespace std;

typedef struct {
    string nome;
    string endereco;
    string cpf;
    int idade;
} Pessoa;

int main() {
    Pessoa pessoas[5];


    for (int i = 0; i < 5; ++i) {
        cout << "Informe o nome da pessoa " << i + 1 << ": ";
        getline(cin, pessoas[i].nome);

        cout << "Informe o endereco da pessoa " << i + 1 << ": ";
        getline(cin, pessoas[i].endereco);

        cout << "Informe o CPF da pessoa " << i + 1 << ": ";
        getline(cin, pessoas[i].cpf);

        cout << "Informe a idade da pessoa " << i + 1 << ": ";
        cin >> pessoas[i].idade;
        cin.ignore();
    }


    cout << "\nInformacoes pessoais:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "\nPessoa " << i + 1 << ":\n";
        cout << "Nome: " << pessoas[i].nome << endl;
        cout << "Endereo: " << pessoas[i].endereco << endl;
        cout << "CPF: " << pessoas[i].cpf << endl;
        cout << "Idade: " << pessoas[i].idade << endl;
    }


}
