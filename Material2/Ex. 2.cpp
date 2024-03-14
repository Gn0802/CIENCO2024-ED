#include <iostream>

using namespace std;

int main() {
    const int totalAlunos = 20;
    float notas[totalAlunos];

    float somaNotas = 0;//123/321//

    for (int i = 0; i < totalAlunos; ++i) {
        cout << "Nota do aluno " << i + 1 << ": ";

        while (!(cin >> notas[i])) {
            cout << "Entrada inválida. Digite um número: ";
        }

        somaNotas += notas[i];
    }

    float mediaTurma = somaNotas / totalAlunos;

    int acimaMedia = 0;
    for (int i = 0; i < totalAlunos; ++i) {
        if (notas[i] > mediaTurma) {
            acimaMedia++;
        }
    }

    cout << "Media da turma: " << mediaTurma << endl;
    cout << "Alunos acima da media: " << acimaMedia << endl;

    return 0;
}
