#include <iostream>

using namespace std;

int main() {
  float precoEtiqueta, valorPago;
  int codigoPagamento;

  cout << "Digite o preco do produto: R$ ";
  cin >> precoEtiqueta;

  cout << "Opcoes de pagamento:" << endl;
  cout << "1 - A vista com 10% de desconto" << endl;
  cout << "2 - A vista com 5% de desconto" << endl;
  cout << "3 - Parcelado em 3 vezes sem juros" << endl;
  cout << "4 - Parcelado em 10 vezes com juros de 10%" << endl;

  cout << "Digite o codigo de pagamento: ";
  cin >> codigoPagamento;

  switch (codigoPagamento) {
  case 1:
    valorPago = precoEtiqueta * 0.9;
    break;
  case 2:
    valorPago = precoEtiqueta * 0.95;
    break;
  case 3:
    valorPago = precoEtiqueta;
    break;
  case 4:
    valorPago = precoEtiqueta * 1.1;
    break;
  default:
    cout << "Codigo de pagamento invalido!" << endl;
    return 1;
  }

  cout << "Valor a ser pago: R$ " << valorPago << endl;

  return 0;
}
