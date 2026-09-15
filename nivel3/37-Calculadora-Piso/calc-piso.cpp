#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>

using namespace std;

// Programa que calcula a quantidade de pisos necessários para cobrir uma sala, sem desperdícios.
// ENTRADAS: Largura(sala), Comprimento(sala), Largura(piso), Comprimento(piso), Peças p/ caixa.
// CÁLCULO: área(sala), área(piso), total peças, total caixas.
// SAÍDA: área(sala), quantidade peças necessárias, quantidade de caixas fechadas.

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    // peça p/ caixa
    int pCx = 0;
    // largura sala, comprimento sala, largura piso, comprimento piso
    double lS = 0, cS = 0, lP = 0, cP = 0;

    cout << "Largura  e comprimento da sala (m): ";
    cin >> lS >> cS;

    cout << "\nLargura  e comprimento do piso (cm): ";
    cin >> lP >> cP;

    // área sala + 10% de sobra
    double aS = (lS * cS) * 1.10;
    // área piso
    double aP = (lP / 100) * (cP / 100);
    // total piso
    double totP = aS / aP;

    cout << "\nQtd peças p/ caixa: ";
    cin >> pCx;

    // total caixa
    // 'ceil' arredonda o valor fracionado para cima
    int totCx = ceil(totP / pCx);

    cout << fixed << setprecision(2);
    cout << "\n\nR•E•S•U•M•O\nÁrea sala: " << aS << "m²"
        << "\nQtd peças necessárias: " << totP
        << "\nQtd caixas fechadas: " << totCx;
    
    cin.ignore();
    getchar();
    return 0;
}