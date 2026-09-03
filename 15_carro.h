
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