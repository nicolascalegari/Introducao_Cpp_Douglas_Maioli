#include <iostream>

using namespace std;

int main() {

    int TAM; //Variavel para definir o tamanho do vetor

    cout << "Digite o tamanho do vetor: ";
    cin >> TAM;

    int* vetor_1 = new int[TAM];

    for (int i = 0; i < TAM; i++){
        cout << "Digite o valor do Vetor[" << i << "]: ";
        cin >> vetor_1[i];
    }

    for (int i = 0; i < TAM; i++){
        cout << vetor_1[i] << endl;
    }

    // Deletar o vetor
    delete [] vetor_1;
}