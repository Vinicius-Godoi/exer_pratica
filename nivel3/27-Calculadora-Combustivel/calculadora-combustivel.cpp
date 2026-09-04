#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    double km = 0.00, vlr_gas = 0.00, consumo = 0.00;

    while(true)
    {
        cout << "Valor do combustível: R$";
        if (!(cin >> vlr_gas))
        {
            cout << "Valor inválido!" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        
        cout << "Distância (KM): ";
        if (!(cin >> km))
        {
            cout << "Valor inválido!" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        cout << "Consumo (KM/L): ";
        if (!(cin >> consumo))
        {
            cout << "Valor inválido!" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        break;
    }

    cout << fixed << setprecision(2);
    cout << "\nCombustível necessário: " << km/consumo << "\nValor total: R$" << (km/consumo) * vlr_gas <<  endl;

    cin.ignore();
    getchar();
    return 0;
}