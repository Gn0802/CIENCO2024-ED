#include <iostream>

using namespace std;

int main() {
  int num, i;
  bool ehPrimo = true;

  cout << "Digite um numero inteiro: ";
  cin >> num;

  if (num <= 1) {
    ehPrimo = false;
  } else {
    for (i = 2; i <= num / 2; ++i) {
      if (num % i == 0) {
        ehPrimo = false;
        break;
      }
    }
  }

  if (ehPrimo) {
    cout << num << " eh um numero primo." << endl;
  } else {
    cout << num << " nao eh um numero primo." << endl;
  }


}
