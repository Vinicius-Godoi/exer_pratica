/*O usuário informa: 
    • horário de entrada;  
    • horário de saída;  
    • tipo de veículo.  
O programa calcula o tempo de permanência e o valor a pagar.*/

#include <iostream>
#include <windows.h>
#include <format>
#include <chrono>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;
using namespace std::chrono;

auto inputHora()
{
    int hora = 0, min = 0, seg = 0;

    // Laço para validação de entrada de horas
    while(true)
    {
        cout << "Hora: ";
        if(!(cin >> hora))
        {
            cout << "[Informe um horário válido!]\n" << endl; 
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        if(hora < 0 || hora > 24)
        {   
            cout << "[Informe um horário válido!]\n" << endl; 
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        hours horas{hora};

        
        cout << "Minutos: ";
        if(!(cin >> min))
        {
            cout << "[Informe um horário válido!]\n" << endl; 
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        if(min < 0 || min > 59)
        {   
            cout << "[Informe um horário válido!]\n" << endl; 
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        minutes minutos{min};
        
        cout << "Segundos: ";
        if(!(cin >> seg))
        {
            cout << "[Informe um horário válido!]\n" << endl; 
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        if(seg < 0 || seg > 59)
        {   
            cout << "[Informe um horário válido!]\n" << endl; 
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        seconds segundos{seg};

        auto horaFinal = horas + minutos + segundos;

        return horaFinal;

        break;
    }
}
int listaValores(auto lista)
{
    cout << "\nTipo de veículo:" << endl;
        for(size_t i = 0; i < lista.size(); i++){cout << 1 + i << " - " << lista[i] << endl;}
    while(true)
    {
        int opcao;
        if(!(cin >> opcao))
        {
            cout << "Insira um número correspondente às opções.\n" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        if(opcao < 1 || opcao > 4)
        {
            cout << "Insira um número correspondente às opções.\n" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        return opcao;
        break;
    }
        
}
double calcTotal(auto entrada, auto saida, double taxa)
{
    
    auto permSeg = saida - entrada;
    if(permSeg.count() < 0)
    {permSeg += hours(24);}

    minutes permMin = duration_cast<minutes>(permSeg);

    cout << "Permaneceu " << permMin.count() << " minutos" << endl;

    if(permMin.count() <= 10)
    {
        taxa = 0;
        cout << "Tempo de permanência dentro da carência." << endl;
    }

    return permMin.count() * taxa;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    while(true)
    {
        const vector<string> modelos = {"Carro popular = R$12,00/hora", "SUV = R$15,00/hora", "Camionete = R$18,00/hora", "Moto = R$6,00/hora"};

        cout << "ESTACIONAMENTO\n" << "\nEntrada →" << endl;


        // Entrada
        auto horaEntrada = inputHora();
        cout << "\nHorário de entrada: " << format("{:%H:%M:%S}", horaEntrada) << endl;

        cout << "\nSaída →" << endl;
        // Saída
        auto horaSaida = inputHora();
        cout << "\nHorário de entrada: " << format("{:%H:%M:%S}", horaSaida) << endl;
        double valorTotal = 0;

        int opc = listaValores(modelos);

        cout << fixed << setprecision(2) << endl;

        switch(opc)
        {
            case 1:// Carro Popular
                valorTotal = calcTotal(horaEntrada, horaSaida, 0.20);
                cout << "Valor Total: R$" << valorTotal << endl;
                break;
              
            case 2: // SUV
                valorTotal = calcTotal(horaEntrada, horaSaida, 0.25);
                cout << "Valor Total: R$" << valorTotal << endl;
                break;
            
            case 3: // Camionete
                valorTotal = calcTotal(horaEntrada, horaSaida, 0.30);
                cout << "Valor Total: R$" << valorTotal << endl;
                break;

            case 4: // Moto
                valorTotal = calcTotal(horaEntrada, horaSaida, 0.10);
                cout << "Valor Total: R$" << valorTotal << endl;
                break;
        }

        char repeat;
        cout << "\nDeseja repetir? (Sim = 's' | Não - [QUALQUER TECLA]) - ";
        cin >> repeat;

        if(repeat == tolower('s')){cout << '\n' << endl; continue;}
        
        break;
    }

    cin.ignore();
    return 0;
}