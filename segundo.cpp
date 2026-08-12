#include <iostream>

using namespace std;

int main(){

    int inteiro;
    inteiro = 5;
    cout << inteiro << endl;

    float real;
    real = 5.2;
    cout << real << endl;

    double real2;
    real2 = 5.2e99;
    cout << real2 << endl;

    bool booleano;
    booleano = true;
    cout << booleano << endl;

    char letra;
    letra = 'b';
    cout << letra << endl;

    string palavra;
    palavra = "bola";
    cout << palavra << endl;

    int idade;
    cout << "Qual a sua idade? ";
    cin >> idade;
    cout << "Sua idade eh: " << idade << endl;

    cout << "Digite qualquer tecla para encerrar: " << endl;
    cin >> idade;

    return 0;
}