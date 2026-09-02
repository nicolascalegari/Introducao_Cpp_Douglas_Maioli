#include <iostream>

using namespace std;

int main() {

    int TAM = 5;
    float gastos[TAM];
    float total = 0;

    for (int i = 0; i < TAM; i++){
        cout << "Informe os gastos da Familia[" << i << "]: ";
        cin >> gastos[i];
        total += gastos[i];
    }

    float media = total / TAM;

    for (int i = 0; i < TAM; i++){
        if (gastos[i] < media){
            cout << "Familia ["<< i << "]: Abaixo da Media" << endl;
        } else if (gastos[i] > media){
            cout << "Familia ["<< i << "]: Acima da Media" << endl;
        } else{
            cout << "Familia ["<< i << "]: Na Media" << endl;
        }
    }
    return 0;
}