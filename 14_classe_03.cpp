#include <iostream>

using namespace std;

class carro{
    private:
    int ano;
    float valor, km;

    public:

    //Construtor
    carro(int a, float v, float k);

    // Get e Set
    void setAno(int ano);

    int getAno();

    void setValor(float valor);

    float getValor();

    void setKm(float km);

    float getKm();

};

int main(){

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