#include <iostream>

using namespace std;

void troca(int* &pont_1, int* &pont_2){

    int temp;

    temp = *pont_1;
    *pont_1 = *pont_2;
    *pont_2 = temp;

}

int main() {

    int* ponteiro_1 = new int;
    *ponteiro_1 = 5;

    int* ponteiro_2 = new int;
    *ponteiro_2 = 7;

    cout << "ponteiro 1: " << ponteiro_1 << " e " << *ponteiro_1 << endl;
    cout << "ponteiro 2: " << ponteiro_2 << " e " << *ponteiro_2 << endl;

    troca(ponteiro_1, ponteiro_2);

    cout << "ponteiro 1: " << ponteiro_1 << " e " << *ponteiro_1 << endl;
    cout << "ponteiro 2: " << ponteiro_2 << " e " << *ponteiro_2 << endl;

    return 0;
}