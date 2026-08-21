#include <iostream>

using namespace std;

int valor_de_x(int x){
    int valor = x * x - 3 * x + 5;
    return valor;
}

int main(){

    int x;
    cout << "Informe um valor de x: ";
    cin >> x;
    cout << "Valor de x = " << valor_de_x(x);

    return 0;
}