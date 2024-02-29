#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 20) {
        int quadrado = i * i;
        cout << "O quadrado de " << i << " eh: " << quadrado << endl;
        ++i;
    }

    return 0;
}
