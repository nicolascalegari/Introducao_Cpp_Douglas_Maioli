#include <iostream>

using namespace std;

int t = 0; //Variavel global

#define pi 3.1415
#define curtir cout << "Outra mensagem de texto" << endl;

void inscrever(){
    cout << "Isso eh uma mensagem de texto" << endl;
}

int somar(int &x, int &y){
    int t; //Variavel local
    t = 1;
    int soma;
    soma = x + y;
    x = 30;
    return soma;
}

int main(){

    int t;
    t = 0;

    inscrever();

    int a = 5, b = 4;
    int s;
    
    s = somar(a, b);
    cout << "Valor da variavel a: " << a << endl;

    cout << "Soma: " << s << endl;

    cout << "Valor de t: " << t << endl;

    cout << pi << endl;

    curtir;

    return 0;
}