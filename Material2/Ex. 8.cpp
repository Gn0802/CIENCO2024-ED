#include <iostream>

using namespace std;

int main()
{
    const int tamanho = 5;
    int array[tamanho];

    cout << "Digite 5 valores inteiros: \n";
    for (int i = 0; i < tamanho; i++)
    {
        cout << "Valor " << i + 1 << ": ";
        cin >> array[i];
    }

    int soma = 0;
    int *ptr = array;
    for (int i = 0; i < tamanho; i++)
    {
        soma += *ptr;
        ptr++;
    }
    double media = static_cast<double>(soma) / tamanho;

    cout << "A média dos valores é: " << media << endl;


}
