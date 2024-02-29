#include <iostream>
using namespace std;

int main() {
    int numeroAluno;
    double altura, alturaMaxima = 0, alturaMinima = 9999;
    int alunoMaisAlto, alunoMaisBaixo;


    for (int i = 1; i <= 10; ++i) {
        cout << "Informe o numero do aluno " << i << ": ";
        cin >> numeroAluno;

        cout << "Informe a altura do aluno " << i << " em centimetros: ";
        cin >> altura;


        if (altura > alturaMaxima) {
            alturaMaxima = altura;
            alunoMaisAlto = numeroAluno;
        }

        if (altura < alturaMinima) {
            alturaMinima = altura;
            alunoMaisBaixo = numeroAluno;
        }
    }


    cout << "\nAluno mais alto:\n";
    cout << "Numero do aluno: " << alunoMaisAlto << "\nAltura: " << alturaMaxima << " cm\n";

    cout << "\nAluno mais baixo:\n";
    cout << "Numero do aluno: " << alunoMaisBaixo << "\nAltura: " << alturaMinima << " cm\n";

    return 0;
}
