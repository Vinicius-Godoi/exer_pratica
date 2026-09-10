#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

double descAdd(char opcao, double desconto){
    if(tolower(opcao) == 's'){
        cout << "Valor: R$";
        cin >> desconto;
        opcao = 'n';
    }
    return desconto;
}

double adiantQuinze(char opcao, double porcentagem){
    if(tolower(opcao) == 's'){
        cout << "Porcentagem: ";
        cin >> porcentagem;
        opcao = 'n';
    }
    return porcentagem/100;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double slrL = 0, slrB = 0;
    // Descontos
    double consign = 0, prevPriv = 0, adiant = 0;
    char opc;

    cout << "Salário Bruto: R$";
    cin >> slrB;
    slrL = slrB;

    cout << "\nPossui empréstimo consignado? ";
    cin >> opc;
    consign = descAdd(opc, consign);
    slrL -= consign;

    cout << "\nRecebe Adiantemento Quinzenal? ";
    cin >> opc;
    adiant = adiantQuinze(opc, adiant) * slrB;
    slrL -= adiant;

    cout << "\nPossui Previdência Privada? ";
    cin >> opc;
    prevPriv = descAdd(opc, prevPriv);
    slrL -= prevPriv;

    double inss = slrB*0.07, irpf = slrB*0.15;
    slrL -= inss + irpf;

    cout << fixed << setprecision(2) << endl;
    cout << "\nFOLHA DE PAGAMENTO:\n"
         << "Salário Bruto: R$" << slrB << "\n\n"
         << "DESCONTOS:\n"
         << "INSS: R$" << inss
         << "\nIRPF: R$" << irpf
         << "\nEmpréstimo Consignado: R$" << consign
         << "\nAdiantemento Quinzenal: R$" << adiant
         << "\nPrevidência Privada: R$" << prevPriv
         << "\n\nSalário Líquido: R$" << slrL;

    cin.ignore();
    getchar();
    return 0;
}