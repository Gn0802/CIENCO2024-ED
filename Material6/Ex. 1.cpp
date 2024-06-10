#include <iostream>
# include <stack>

using namespace std;

int main(){
    stack <int> pilha;
    int opcao, elemento;

 do {

    cout << "Escolha uma opcao:\n " << endl;
    cout << "1. Inserir elemento " << endl;
    cout << "2. Remover elemento do topo " << endl;
    cout << "3. Verificar elemento do topo " << endl;
    cout << "4. Verificar se a pilha esta vazia " << endl;
    cout << "5. Exibir tamanho da pilha " << endl;
    cout << "0. Sair \n\n " << endl;
    cout << "Opcao: ";
    cin >> opcao;

    cout << endl;




switch(opcao){



case 1:


    cout << "Digite qual elemento deseja inserir: " ;
    cin >> elemento;

    pilha.push(elemento);

    cout << "Elemento " << elemento << " inserido" << endl;

    break;

case 2:

    cout << "Elemento "<< pilha.top() << " removido !" << endl;
    pilha.pop();

    break;

case 3:

    cout << "O elemento do topo eh: " << pilha.top() << endl;

    break;

case 4:

    cout << "A pilha esta vazia? " << (pilha.empty() ? "Sim" : "Nao") << endl;

    break;

case 5:

    cout << "O tamanho da pilha eh; " << pilha.size() << endl;

    break;


        }
 }while (opcao != 0);
}
