#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

void calcParc(double vlr, int parc){
    cout << fixed << setprecision(2);

    for(int i = parc; i >=2; --i){
        cout << i << "x R$" << vlr/i << '\n';
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    double compra = 0;
    int nParc = 0;

    cout << "Valor da compra: R$";
    cin >> compra;

    cout << "MAX parcelas: ";
    cin >> nParc;

    cout << fixed << setprecision(2);
    cout << "\n\nPARCELAMENTO: \n";
    calcParc(compra, nParc);

    cin.ignore();
    getchar();
    return 0;
}