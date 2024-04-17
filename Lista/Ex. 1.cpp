#include <iostream>
#include <vector>

using namespace std;

int main() {
  string nomeAtleta;
  vector<float> notas;
  float melhorNota, piorNota, somaNotas;
  int i, j;

  cout << "Digite o nome do atleta: ";
  cin >> nomeAtleta;

  for (i = 0; i < 7; i++) {
    cout << "Digite a nota " << i + 1 << ": ";
    cin >> notas[i];
  }

  melhorNota = notas[0];
  piorNota = notas[0];

  for (i = 0; i < 7; i++) {
    if (notas[i] > melhorNota) {
      melhorNota = notas[i];
    }
    if (notas[i] < piorNota) {
      piorNota = notas[i];
    }
  }

  somaNotas = 0;

  for (i = 0; i < 7; i++) {
    if (notas[i] != melhorNota && notas[i] != piorNota) {
      somaNotas += notas[i];
    }
  }

  float media = somaNotas / 5;

  cout << endl;
  cout << "Resultado final:" << endl;
  cout << "Atleta: " << nomeAtleta << endl;
  cout << "Melhor nota: " << melhorNota << endl;
  cout << "Pior nota: " << piorNota << endl;
  cout << "Média: " << media << endl;


}
