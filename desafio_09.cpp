#include <iostream>

using namespace std;

int main() {

    int* idade_1 = new int;
    int* idade_2 = new int;

    cout << "qual a idade da primeira pessoa: " << endl;
    cin >> *idade_1;
    cout << "qual a idade da segunda pessoa: " << endl;
    cin >> *idade_2;

    float* media = new float;
    
    *media = (*idade_1 + *idade_2) / 2;

    cout << "a media das idades = " << *media;

    return 0;
}