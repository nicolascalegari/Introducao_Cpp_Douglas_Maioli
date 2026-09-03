 #include <iostream>
 #include "15_carro.h"
 
 using namespace std;
   
   //Construtor
    carro::carro(int a=0, float v=-1, float k=-1){
        ano = a;
        valor = v;
        km = k;
    }

    // Get e Set
    void carro::setAno(int ano){
        this->ano = ano;
    }

    int carro::getAno(){
        return ano;
    }

    void carro::setValor(float valor){
        this->valor = valor;
    }

    float carro::getValor(){
        return valor;
    }

    void carro::setKm(float km){
        this->km = km;
    }

    float carro::getKm(){
        return km;
    }