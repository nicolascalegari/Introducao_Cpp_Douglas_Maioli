#include <iostream>
#include "cidades_brasil.h"

using namespace std;

int main (){

    cidades_brasil campinas(1774, 1214000);
    cout << "Campinas:" << endl;
    cout << "Ano: " << campinas.get_ano() << endl;
    cout << "Populacao: " << campinas.get_pop() << endl;

    cidades_brasil aracatuba(1908, 198129);
    aracatuba.acrescenta_popupacao(1);
    cout << "Aracatuba:" << endl;
    cout << "Ano: " << aracatuba.get_ano() << endl;
    cout << "Popupacao: " << aracatuba.get_pop() << endl;

    return 0;
}