#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

// Cálculo de consumo de tinta tendo como base a área a ser pintada
// A fórmula é: L(litros) = (Área(m²) / Rendimento(m²/L por demão)) * nº demãos
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // área, rendimento, nº demãos
    double ar = 0, rd = 0, nd = 0;

    cout << "Área útil (m²) a ser pintada: ";
    cin >> ar;

    cout << "Rendimento (m²/L por demão) da tinta: ";
    cin >> rd;

    cout << "Nº de demãos: ";
    cin >> nd;

    double lt = (ar / rd) * nd;

    cout << fixed << setprecision(1);
    cout << "\nLitros necessários para pintar " << ar << "m²: " << lt << " litros";
    
    cin.ignore();
    getchar();
    return 0;
}