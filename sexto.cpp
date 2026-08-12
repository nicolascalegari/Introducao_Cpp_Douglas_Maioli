#include <iostream>

using namespace std;

int main(){

    float nota1, nota2;

    cout << "Informe a nota 1: " << endl;
    cin >> nota1;
    cout << "Informe a nota 2: " << endl;
    cin >> nota2;

    float media = (nota1 + nota2) / 2;

    if (media >= 5){
        cout << "Aprovado" << endl;
        cout << "Media = " << media << endl;
    }else{
        cout << "Reprovado" << endl;
        cout << "Media = " << media << endl;
    }

    if (media < 2.5){
        cout << "Nota D" << endl;
    }else if (media < 5){
        cout << "Nota C" << endl;
    }else if (media < 7.5){
        cout << "Nota B" << endl;
    } else {
        cout << "Nota A" << endl;
    }

    float freq;

    cout << "Qual a frequencia do aluno?" <<  endl;
    cin >> freq;

    if (media >= 6 and freq >= 75){
        cout << "Aluno Aprovado" << endl;
    } else {
        cout << "Aluno Reprovado" << endl;
    }

    if (media < 6 or freq < 75) {
        cout << "Aluno Reprovado" << endl; 
    }else{
        cout << "Aluno Aprovado" << endl;
    }

    //Operador Ternario
    (media >= 5) ? cout << "Aprovado" : cout << "Reprovado";

    return 0;
}