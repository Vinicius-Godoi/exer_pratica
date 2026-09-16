#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int qPerson = 0;
    double cPerson = 0;

    while(true)
    {
        cout << "Quantidade de pessoas: ";
        cin >> qPerson;
        if (!qPerson)
        {
            cout << "É necessário entrar com um número inteiro!" << endl;
            continue;
        }

        cout << "Custo por pessoa: R$";
        cin >> cPerson;
        if (!cPerson)
        {
            cout << "É necessário entrar com um número!" << endl;
            continue;
        }

        double cEvent = qPerson * cPerson;

        cout << fixed << setprecision(2) << endl;
        cout << "\nCusto do evento: R$" << cEvent;

        break;
    }
    

    cin.ignore();
    getchar();
    return 0;
}