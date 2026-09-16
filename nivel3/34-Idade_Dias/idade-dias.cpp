#include <iostream>
#include <windows.h>

using namespace std;

// Programa que converte a idade (anos) em dias aproximados.
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int anos = 0, dias = 0;

    cout << "Idade em anos: ";
    cin >> anos;

    dias = (anos*365) + (anos/4);

    cout << "\nIdade em dias (aproximadamente): " << dias;

    cin.ignore();
    getchar();
    return 0;
}