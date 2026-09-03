#include <iostream>

using namespace std;

class propaganda{
    private:

    public:

    void inscrever(){
        cout << "funcao inscrever!" << endl;
    }

    void curta(){
        cout << "funcao curta!" << endl;
    }
};

int main(){

    propaganda canal;
    canal.inscrever();
    canal.curta();

    return 0;
}