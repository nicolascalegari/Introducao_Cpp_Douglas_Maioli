#include <iostream>
#include "15_carro.h"

using namespace std;

int main() {

    carro palio(1999, 13000, 80000); //Usando construtor
    //palio.setAno(2006);
    //palio.setValor(10000);
    //palio.setKm(90000);

    cout << "Palio: " << endl;
    cout << "Ano: " << palio.getAno() << endl;
    cout << "Valor: " << palio.getValor() << endl;
    cout << "Km: " << palio.getKm() << endl;

    carro celta(1989, 15000, 60000); //Usando construtor
    //celta.setAno(1988);
    //celta.setValor(12000);
    //celta.setKm(70000);

    cout << "Celta: " << endl;
    cout << "Ano: " << celta.getAno() << endl;
    cout << "Valor: " << celta.getValor() << endl;
    cout << "Km: " << celta.getKm() << endl;

    return 0;
}