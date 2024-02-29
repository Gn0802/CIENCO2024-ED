#include <iostream>
using namespace std;

int main() {
    double salarioAtual, novoSalario;

    cout << "Digite o salário atual do funcionário: ";
    cin >> salarioAtual;

    if (salarioAtual < 1000) {
        novoSalario = salarioAtual * 1.15;
    } else if (salarioAtual <= 1500) {
        novoSalario = salarioAtual * 1.10;
    } else {
        novoSalario = salarioAtual * 1.05;
    }

    cout << "\n O novo salário do funcionário é: R$ " << novoSalario << endl;

    return 0;
}
