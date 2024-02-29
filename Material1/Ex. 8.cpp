#include <iostream>
using namespace std;

int main() {
    int voto, totalVotos = 0, votosCandidato1 = 0, votosCandidato2 = 0, votosNulos = 0, votosBrancos = 0;

    cout << "Bem-vindo a eleicao presidencial!\n";
    cout << "Digite o codigo do candidato: \n1 para Candidato 1 \n2 para Candidato 2\n";
    cout << "3 para voto nulo \n4 para voto em branco \nDigite 0 para encerrar:\n";

    while (true) {
        cout << "Digite seu voto: ";
        cin >> voto;

        if (voto == 0) {
            break;
        }

        totalVotos++;

        switch (voto) {
            case 1:
                votosCandidato1++;
                cout << "Voto registrado para Candidato 1. Obrigado!\n";
                break;
            case 2:
                votosCandidato2++;
                cout << "Voto registrado para Candidato 2. Obrigado!\n";
                break;
            case 3:
                votosNulos++;
                cout << "Voto nulo registrado. Lamentamos sua decisao.\n";
                break;
            case 4:
                votosBrancos++;
                cout << "Voto em branco registrado. Agradecemos sua participacao.\n";
                break;
            default:
                cout << "Codigo de voto invalido. Por favor, escolha uma opcao valida.\n";
        }
    }

    double percentualCandidato1 = (votosCandidato1 * 100.0) / totalVotos;
    double percentualCandidato2 = (votosCandidato2 * 100.0) / totalVotos;
    double percentualNulos = (votosNulos * 100.0) / totalVotos;
    double percentualBrancos = (votosBrancos * 100.0) / totalVotos;

    cout << "\nResultado da eleicao:\n";
    cout << "Percentual de votos para Candidato 1: " << percentualCandidato1 << "%\n";
    cout << "Percentual de votos para Candidato 2: " << percentualCandidato2 << "%\n";
    cout << "Percentual de votos nulos: " << percentualNulos << "%\n";
    cout << "Percentual de votos em branco: " << percentualBrancos << "%\n";

    return 0;
}
