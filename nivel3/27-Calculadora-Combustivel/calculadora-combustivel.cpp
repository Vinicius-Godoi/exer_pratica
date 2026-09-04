#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    double km = 0.00, vlr_gas = 0.00, consumo = 0.00;

    cout << "Valor do combustível: R$";
    cin >> vlr_gas;

    cout << "Distância (KM): ";
    cin >> km;

    cout << "Consumo (KM/L): ";
    cin >> consumo;

    cout << "Combustível necessário: " << km/consumo << "\nValor total: " << (km/consumo) * vlr_gas <<  endl;

    cin.ignore();
    getchar();
    return 0;
}