#include <iostream>
#include <string>
using namespace std;

struct Filme {
    string titulo;
    double enredo;
    double atuacao;
    double efeitosEspeciais;
};

int main() {
    Filme filme;
    char continuar;

    do {
        cout << "=== Avaliacao de Filmes ===" << endl;
        cout << "Entre com o título do filme: ";
        getline(cin, filme.titulo);

        cout << "Avalie o enredo (de 0 a 10): ";
        cin >> filme.enredo;

        cout << "Avalie a atuacao (de 0 a 10): ";
        cin >> filme.atuacao;

        cout << "Avalie os efeitos especiais (de 0 a 10): ";
        cin >> filme.efeitosEspeciais;

        double media = (filme.enredo + filme.atuacao + filme.efeitosEspeciais) / 3.0;

        cout << "Média das avaliacoes: " << media << endl;

        cout << "Deseja avaliar outro filme? (s/n): ";
        cin >> continuar;

        cin.ignore();

    } while (continuar == 's' || continuar == 'S');

    cout << "\n\nPrograma encerrado.";


}
