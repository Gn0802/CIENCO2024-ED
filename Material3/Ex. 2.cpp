#include <iostream>
#include <string>
using namespace std;

struct Livro {
    string titulo;
    string autor;
    string anoPublicacao;
};

int main() {
    const string palavraFim = "Fim";
    Livro livro;

    do {
        cout << "Entre com o titulo do livro (ou digite 'Fim' para encerrar): ";
        cin >> livro.titulo;

        if (livro.titulo == palavraFim) {
            cout << "Programa encerrado." << endl;
            break;
        }

        cout << "Entre com o autor do livro : ";
        cin >> livro.autor;

        if (livro.autor == palavraFim) {
            cout << "Programa encerrado." << endl;
            break;
        }

        cout << "Entre com o ano de publicacao do livro : ";
        cin >> livro.anoPublicacao;

        if (livro.anoPublicacao == palavraFim) {
            cout << "\n\nPrograma encerrado." << endl;
            break;
        }

        cout << "Livro registrado com sucesso!";

    } while (true);


}
