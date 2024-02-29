#include <iostream>

using namespace std;

int main()
{
    float peso, altura;

    cout << "Entre com o peso em Kg: " << endl;
    cin >> peso;

    cout << "Entre com a altura: ";
    cin >> altura;

    float imc = peso / (altura * altura);

    cout << "\n";

        if (imc < 20)
        {
            cout << "Abaixo do peso";
        }
        else if (imc >= 20&&imc < 25)
        {
            cout << "Peso ideal !";
        }else
        {
            cout << "Acima do peso";
        }

}
