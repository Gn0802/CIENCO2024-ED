#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  float totalCompra = 0.0, valorPago, troco;
  bool continuar = true;

  while (continuar) {
    totalCompra = 0.0;

    while (true) {
      float preco;
      cout << fixed << setprecision(2);
      cout << "Digite o preço da mercadoria (ou 0 para finalizar): R$ ";
      cin >> preco;

      if (preco == 0.0) break;

      totalCompra += preco;
    }

    cout << endl;
    cout << "Total da compra: R$ " << totalCompra << endl;

    cout << "Digite o valor pago pelo cliente: R$ ";
    cin >> valorPago;

    troco = valorPago - totalCompra;

    cout << "Troco: R$ " << troco << endl;

    char continuarCompra;
    cout << "Deseja continuar? (S/N): ";
    cin >> continuarCompra;

    continuar = (continuarCompra == 'S' || continuarCompra == 's');
  }

}
