#include <iostream>

using namespace std;

struct Aluno {
  string nome;
  int idade;
  float nota;
};

typedef Aluno TipoAluno;

int main() {
  string nomeAluno;
  int idadeAluno;
  float notaAluno;

  cout << "Digite o nome do aluno: ";
  cin >> nomeAluno;

  cout << "Digite a idade do aluno: ";
  cin >> idadeAluno;

  cout << "Digite a nota do aluno: ";
  cin >> notaAluno;

  TipoAluno aluno;
  aluno.nome = nomeAluno;
  aluno.idade = idadeAluno;
  aluno.nota = notaAluno;

  cout << "\nDados do Aluno:\n";
  cout << "Nome: " << aluno.nome << endl;
  cout << "Idade: " << aluno.idade << " anos" << endl;
  cout << "Nota: " << aluno.nota << endl;


}
