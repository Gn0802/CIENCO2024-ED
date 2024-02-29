#include <iostream>
using namespace std;

int main() {
    const int NUM_OPCOES = 4;
    int idade, opcao, total = 0, somaIdade = 0;
    int respostas[NUM_OPCOES] = {0};

    while (true) {
        cout << "Informe a idade (ou negativo para encerrar): ";
        cin >> idade;

        if (idade < 0) break;

        total++;
        somaIdade += idade;

        cout << "Informe a opiniao (1 - Otimo, 2 - Bom, 3 - Regular, 4 - Ruim): ";
        cin >> opcao;

        if (opcao >= 1 && opcao <= NUM_OPCOES) {
            respostas[opcao - 1]++;
        } else {
            cout << "Opcao invalida. Por favor, escolha entre 1 a " << NUM_OPCOES << ".\n";
            total--;
        }
    }

    if (total > 0) {
        float mediaIdade = somaIdade / float(total);
        cout << "\n**Resultados da pesquisa:**\n"
             << "A. Quantidade de pessoas que responderam: " << total << "\n"
             << "B. Media de idade: " << mediaIdade << "\n"
             << "C. Porcentagem de respostas:\n";

        for (int i = 0; i < NUM_OPCOES; i++) {
            cout << "   " << i + 1 << ". Porcentagem: " << (respostas[i] / float(total)) * 100 << "%\n";
        }
    } else {
        cout << "Nenhuma resposta foi registrada.\n";
    }

    return 0;
}
