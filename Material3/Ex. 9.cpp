#include <iostream>

enum class Cores {
  VERMELHO,
  VERDE,
  AZUL
};

void imprimirCor(const Cores cor) {
  switch (cor) {
    case Cores::VERMELHO:
      cout << "Vermelho\n";
      break;
    case Cores::VERDE:
      cout << "Verde\n";
      break;
    case Cores::AZUL:
      cout << "Azul\n";
      break;
  }
}

int main() {
  Cores corEscolhida;

  cout << "Escolha uma cor:\n";
  cout << "1 - Vermelho\n";
  cout << "2 - Verde\n";
  cout << "3 - Azul\n";

  int opcao;
  cin >> opcao;

  while (opcao < 1 || opcao > 3) {
    cout << "Opção inválida. Digite um número entre 1 e 3: ";
    cin >> opcao;
  }

  corEscolhida = static_cast<Cores>(opcao - 1);

  cout << "Você escolheu a cor: ";
  imprimirCor(corEscolhida);

}
