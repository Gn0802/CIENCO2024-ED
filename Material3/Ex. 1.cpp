#include <iostream>
using namespace std;

struct Paciente {
    string nome;
    int idade;
    string sintoma;
};

int main() {
    Paciente paciente;
    char continuar;

    do {
        cout << "Entre com o nome do paciente: ";
        cin >> paciente.nome;

        cout << "Entre com a idade do paciente: ";
        cin >> paciente.idade;

        cout << "Entre com o sintoma do paciente: ";
        cin >> paciente.sintoma;

        cout << "Deseja cadastrar outro paciente? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    cout << "\n\nPrograma encerrado.";
}
