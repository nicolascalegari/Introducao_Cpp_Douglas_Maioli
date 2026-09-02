#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    int TAM = 3;

    srand(time(nullptr)); //Gerar numeros aleatorios

    int matrix_1[TAM][TAM]; //Linhas x Colunas

    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            int numero = rand() % 100; //Atribuir numeros aleatorio de 0 a 100
            matrix_1[i][j] = numero;
        }
    }

    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            cout << matrix_1[i][j] << " - ";
        }
        cout << endl; //Quebra de linha entre as linhas da Matrix
    }

}