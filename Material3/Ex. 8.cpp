#include <iostream>

using namespace std;

typedef int VetorInteiros[5];

int main() {
    VetorInteiros vetor = {1, 2, 3, 4, 5};

    cout << "Valores do vetor de inteiros:\n";
    for (int i = 0; i < 5; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;


}
