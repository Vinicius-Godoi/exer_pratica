#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    double vlr;

    cout << "Valor da conta: R$";
    cin >> vlr;

    cout << fixed << setprecision(2);
    cout << "\n\nRECIBO \nSubtotal: " << vlr << "\n\n10% de gorjeta: R$" << vlr*0.10 << "\nTotal: R$" << vlr + (vlr*0.10) << endl;
    
    cin.ignore();
    getchar();
    return 0;
}