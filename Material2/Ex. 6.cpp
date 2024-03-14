#include <iostream>
#include <limits>

using namespace std;

int main() {
    const int diasNoAno = 5;
    float temperaturas[diasNoAno];

    cout << "Digite as temperaturas medias diarias do ano:\n";
    for (int i = 0; i < diasNoAno; ++i) {
        cout << "Dia " << i + 1 << ": ";
        cin >> temperaturas[i];
    }

    float menorTemperatura = temperaturas[0], maiorTemperatura = temperaturas[0], somaTemperaturas = 0;

    for (int i = 0; i < diasNoAno; ++i) {
        menorTemperatura = min(menorTemperatura, temperaturas[i]);
        maiorTemperatura = max(maiorTemperatura, temperaturas[i]);
        somaTemperaturas += temperaturas[i];
    }

    float temperaturaMediaAnual = somaTemperaturas / diasNoAno;

    int diasInferioresMediaAnual = 0;
    for (int i = 0; i < diasNoAno; ++i) {
        if (temperaturas[i] < temperaturaMediaAnual) {
            diasInferioresMediaAnual++;
        }
    }

    cout << "\nResultados:\n";
    cout << "a) Menor temperatura do ano: " << menorTemperatura << "C\n";
    cout << "b) Maior temperatura do ano: " << maiorTemperatura << "C\n";
    cout << "c) Temperatura media anual: " << temperaturaMediaAnual << "C\n";
    cout << "d) Numero de dias com temperatura inferior a media anual: " << diasInferioresMediaAnual << " dias\n";

    return 0;
}
