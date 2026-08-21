#include <iostream>

using namespace std;

int main(){

    float n1, n2, n3, media_aluno, media_geral;

    cout << "Informe as tres notas do aluno: ";
    cin >> n1 >> n2 >> n3;
    cout << "Informe a media geral da sala: ";
    cin >> media_geral;
    
    media_aluno = (n1 + n2 + n3) / 3;

    if (media_aluno > media_geral){
        cout << "Acima da media";
    } else if (media_aluno == media_geral){
        cout << "Esta na media";
    } else {
        cout << "Abaixo da media";
    }

}