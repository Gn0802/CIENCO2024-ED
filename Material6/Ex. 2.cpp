#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> pilha;
    int n;

    cout << "Digite um n�mero inteiro positivo (ou 0 para finalizar): ";
    cin >> n;

    while (n != 0) {
        if (n > 0) {
            pilha.push(n);
        } else {
            cout << "N�mero inv�lido. Digite um n�mero inteiro positivo (ou 0 para finalizar): ";
        }
        cout << "Digite um n�mero inteiro positivo (ou 0 para finalizar): ";
        cin >> n;
    }

    cout << "N�meros na ordem inversa: " << endl;

    while (!pilha.empty()) {
        cout << pilha.top() << " ";
        pilha.pop();
    }

    cout << endl;


