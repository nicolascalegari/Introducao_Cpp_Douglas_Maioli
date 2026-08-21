#include <iostream>

using namespace std;

unsigned long long fatorial(int n){

    if (n <= 1){
        return 1;
    }

    return n * fatorial(n - 1);

}

int main(){

    int numero;

    while (true){
        cout << "Informe um numero (+) para calcular o fatorial: ";
        cin >> numero;

        if (numero <= 0){
            cout << "Numero inválido\n";
        }
        else {
            break;
        }
    }

    cout << "Fatorial de " << numero << " e: " << fatorial(numero);
    
    return 0;

}