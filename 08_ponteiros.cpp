#include <iostream>
#include <cstddef>

using namespace std;

int main() {
    int var1;
    int* pont1;
    var1 = 5;
    pont1 = &var1;

    cout << "Valor direto na variavel 'var1': " << var1 << endl;
    cout << "Endereco de memoria: " << pont1 << endl;
    cout << "Valor da variavel 'var1' pelo ponteiro: " << *pont1 << endl;

    //int var2;
    *pont1 = 5;
    cout << var1 << endl;

    int* pont3 = new int;
    *pont3 = 35;
    delete pont3;
    
    *pont3 = *pont1;
    cout << *pont3;

    return 0;

}