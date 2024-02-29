#include <iostream>
using namespace std;

int main() {
    double horasTrabalhadas, salarioMinimo, valorHoraTrabalhada, salarioBruto, imposto, salarioReceber;

    cout << "Digite o numero de horas trabalhadas: ";
    cin >> horasTrabalhadas;

    cout << "Digite o valor do salario minimo: ";
    cin >> salarioMinimo;

    valorHoraTrabalhada = salarioMinimo / 2.0;

    salarioBruto = horasTrabalhadas * valorHoraTrabalhada;

    imposto = 0.03 * salarioBruto;

    salarioReceber = salarioBruto - imposto;

    cout << "\nValor da hora trabalhada: R$ " << valorHoraTrabalhada << endl;
    cout << "Salario bruto: R$ " << salarioBruto << endl;
    cout << "Imposto (3%): R$ " << imposto << endl;
    cout << "Salario a receber: R$ " << salarioReceber << endl;

    return 0;
}
