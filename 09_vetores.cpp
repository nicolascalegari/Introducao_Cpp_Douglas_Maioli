#include <iostream>

using namespace std;

int main() {

    int vetor_1[4]; //[0 a 3 = 4]
    vetor_1[0] = 5;
    vetor_1[1] = 10;
    vetor_1[2] = 15;
    vetor_1[3] = 20;

    for (int i = 0; i < 4; i++){
        cout << vetor_1[i] << endl;
    }

    //Outra forma de declarar vetor com atribuicao
    int vetor_2[4]= {1, 2, 3, 4};

    for (int i = 0; i < 4; i++){
        cout << vetor_2[i] << endl;
    }

    //Ver tamanho em bytes
    int x = sizeof(vetor_1);
    cout << x << endl;

    //Ver tamanho de apenas 1 inteiro
    int y = sizeof(vetor_1) / sizeof(int);
    cout << y << endl;

    return 0;
}