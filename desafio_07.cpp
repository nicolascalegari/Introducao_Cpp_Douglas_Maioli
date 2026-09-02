#include <iostream>

using namespace std;

int main() {

    int l, c;

    cout << "qual qtd de linhas: " << endl;
    cin >> l;
    cout << "qual qtd de colunas: " << endl;
    cin >> c;

    float matriz_1[l][c], matriz_2[l][c];
    float soma = 0;
    cout << "digite os elementos da matriz 1: " << endl;
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            cout << "informe o elemento matriz[" << i+1 << "][" << j+1 << "]: " << endl;
            cin >> matriz_1[i][j];
            soma += matriz_1[i][j];
        }
    }

    cout << "digite os elementos da matriz 2: " << endl;
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            cout << "informe o elemento matriz[" << i+1 << "][" << j+1 << "]: " << endl;
            cin >> matriz_2[i][j];
            soma += matriz_2[i][j];
        }
    }
    cout << "valor total da soma das matrizes: " << soma;

    return 0;
}