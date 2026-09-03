#include <iostream>
#include "cidades_brasil.h"

using namespace std;

    cidades_brasil::cidades_brasil(int a=0, int p=0){
        ano = a;
        populacao = p;
    }

    void cidades_brasil::set_ano(int a){
        ano = a;
    }

    int cidades_brasil::get_ano(){
        return ano;
    }

    void cidades_brasil::set_pop(int p){
        populacao = p;
    }

    int cidades_brasil::get_pop(){
        return populacao;
    }

    void cidades_brasil::acrescenta_popupacao(int p){
        populacao += p;
    }
