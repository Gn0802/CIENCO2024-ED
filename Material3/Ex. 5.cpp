#include <iostream>
#include <string>
using namespace std;

struct Pedido {
    string nomePrato;
    int quantidade;
    double precoTotal;
};

int main() {
    const double PRECO_ESPECIAL = 0.0;
    Pedido pedido;

    do {
        cout << "=== Registro de Pedidos ===" << endl;
        cout << "Nome do prato: ";
        getline(cin, pedido.nomePrato);

        cout << "Quantidade: ";
        cin >> pedido.quantidade;

        cout << "Preço total: ";
        cin >> pedido.precoTotal;



        cout << "Pedido registrado com sucesso!" << endl;

    } while (pedido.precoTotal != PRECO_ESPECIAL);

    cout << "\n\nPrograma encerrado.";

}
