#include <iostream>

using namespace std;

float potencia(float base, int pot){

    float resultado = 1.0;
    int cont = 1;

    while (cont <= pot){
        resultado *= base;
        cont += 1;
    }
    return resultado;
}

int main(){

    float base;
    int pot;
    char op;

    do {
    cout << "Informe a base(float) e a potencia(int): ";
    cin >> base >> pot;
    cout << "Resultado: " << potencia(base, pot);
    cout << "\nPara continuar digite [s]: ";
    cin >> op;
    } while (op == 's');

    return 0;
}