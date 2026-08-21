#include <iostream>

using namespace std;

bool moradia(int anos, float salario){
    if (anos > 21 and salario < 1200.00){
        return true;
    }else{
        return false;
    }
}

int main(){

    int anos;
    float salario;

    cout << "Informe sua idade e salario: ";
    cin >> anos >> salario;

    if (moradia(anos, salario)){
        cout << "Aprovado!";
    }else{
        cout << "Reprovado";
    }

    return 0;
}