#include <iostream>

using namespace std;

int main() {

    int tam, teste;
    
    do {

        cout << "digite o tamanho do vetor: " << endl;
        cin >> tam;

        float* vetor = new float[tam]; //Vetor dinamico

        for (int i = 0; i < tam; i++){
            cout << "digite o elemento vetor[" << i+1 << "}: ";
            cin >> vetor[i];
        }

        cout << "Vetor: [";
        for (int i = 0; i < tam; i++){
            cout << vetor[i] << " ";
        }
        cout << "]" << endl;

        cout << "deseja inserir outro vetor? [1/0]: " << endl;
        cin >> teste;

        delete [] vetor; //Deletar o vetor

    } while (teste != 0);
    
    return 0;
}