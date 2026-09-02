#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a = 5, b = 2;

    int soma = a + b;
    cout << "Soma = " << soma << endl;
    cout << "Soma direto no cout = " << a + b << endl;
    cout << "Subtracao direto no cout = " << a - b << endl;
    cout << "Multiplicacao direto no cout = " << a * b << endl;

    int quocdiv = a / b;
    cout << "Quociente da divisao = " << quocdiv << endl;
    
    int restodiv = a % b;
    cout << "Resto da divisao = " << restodiv << endl;

    float div = (float)a / (float)b;
    cout << "Divisao com numero float: " << div << endl;

    float pot = pow(a, b);
    cout << "Potencia de " << a << "^" << b << " = " << pot << endl;

    cout << "Valor de 'a' antes do incremento: " << a << endl;
    a++;
    cout << "Valor de 'a' depois do incremento: " << a << endl;

    cout << "Valor de 'a' antes do incremento: " << a << endl;
    a*=2;
    cout << "Valor de 'a' depois do incremento: " << a << endl;

    return 0;
}