#include <iostream>

using namespace std;

class carro{
    private:

    int ano;
    float valor, km;

    public:

    //Construtor
    carro(int a=0, float v=-1, float k=-1){
        ano = a;
        valor = v;
        km = k;
    }

    // Get e Set
    void setAno(int ano){
        this->ano = ano;
    }

    int getAno(){
        return ano;
    }

    void setValor(float valor){
        this->valor = valor;
    }

    float getValor(){
        return valor;
    }

    void setKm(float km){
        this->km = km;
    }

    float getKm(){
        return km;
    }

};

int main(){

    carro palio(1999, 13000, 80000); //Usanso construtor
    //palio.setAno(2006);
    //palio.setValor(10000);
    //palio.setKm(90000);

    cout << "Palio: " << endl;
    cout << "Ano: " << palio.getAno() << endl;
    cout << "Valor: " << palio.getValor() << endl;
    cout << "Km: " << palio.getKm() << endl;

    carro celta(1989, 15000, 60000); //Usanso construtor
    //celta.setAno(1988);
    //celta.setValor(12000);
    //celta.setKm(70000);

    cout << "Celta: " << endl;
    cout << "Ano: " << celta.getAno() << endl;
    cout << "Valor: " << celta.getValor() << endl;
    cout << "Km: " << celta.getKm() << endl;

    return 0;
}