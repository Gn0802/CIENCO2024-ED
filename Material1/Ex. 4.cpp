#include <iostream>
using namespace std;

int main() {
    double salarioAtual, novoSalario;

    cout << "Digite o sal�rio atual do funcion�rio: ";
    cin >> salarioAtual;

    if (salarioAtual < 1000) {
        novoSalario = salarioAtual * 1.15;
    } else if (salarioAtual <= 1500) {
        novoSalario = salarioAtual * 1.10;
    } else {
        novoSalario = salarioAtual * 1.05;
    }

    cout << "\n O novo sal�rio do funcion�rio �: R$ " << novoSalario << endl;

    return 0;
}
