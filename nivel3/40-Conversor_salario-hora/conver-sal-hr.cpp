// Programa que calcula o valor das horas trabalhadas baseado no salário, ou o salário baseado o valor das horas.
#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

double calcHora(double salario, double horaTrab)
{
    return salario / horaTrab;
}

double calcSal(double valorHora, double horaTrab)
{
    return valorHora * horaTrab;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    

    while(true)
    {
        double hrTrab = 0, salMens = 0, vlrHora = 0;
        char opc;

        cout << "Qual cálculo deseja realizar?\n1 - Valor hora    2 - Salário total" << endl;
        cin >> opc;

        if(opc != '1' && opc != '2')
        {
            cout << "\nInsira uma opção válida" << endl;
            continue;
        }

        cout << fixed << setprecision(2);
        switch(opc)
        {
            case '1':
                cout << "\nSalário mensal: R$";
                cin >> salMens;
                cout << "Horas trabalhadas por mês: ";
                cin >> hrTrab;

                vlrHora = calcHora(salMens, hrTrab);

                cout << "\nValor da hora trabalhada: R$" << vlrHora << endl;
                break;

            case '2':
                cout << "\nValor da hora trabalhada: R$";
                cin >> vlrHora;
                cout << "Horas trabalhadas por mês: ";
                cin >> hrTrab;

                salMens = calcSal(vlrHora, hrTrab);

                cout << "\nSalário mensal: R$" << salMens << endl;
                break;
        }

        cout << "\nDeseja realizar outro cálculo? (s = sim / n = não)";
        cin >> opc;
        cout << endl;
        
        if(opc == tolower('s'))
        {continue;}
        else
        {break;}

    }

    return 0;
}