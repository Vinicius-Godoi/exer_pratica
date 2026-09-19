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

using namespace std;
using namespace std::chrono;

auto dadosHora()
{
    int hora = 0, min = 0, seg = 0;

    cout << "Hora: ";
    cin >> hora;
    hours horas{hora};
    
    cout << "Minutos: ";
    cin >> min;
    minutes minutos{min};
    
    cout << "Segundos: ";
    cin >> seg;
    seconds segundos{seg};

    auto horaFinal = horas + minutos + segundos;

    return horaFinal;
}

auto convertHora(int hora, int minuto, int segundo)
{
    hours hr_input{hora};
    minutes min_input{minuto};
    seconds seg_input{segundo};

    auto convertido = hr_input + min_input + seg_input;

    return convertido;
}

double calcTotal(auto entrada, auto saida, int veiculo)
{
    seconds segEntrada = entrada;
    seconds segSaida = saida;

    

    double permanencia = (segSaida.count() - segEntrada.count());

    cout << "Permaneceu " << permanencia << " segundos" << endl;

    return permanencia * veiculo;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    while(true)
    {
        const vector<string> modelos = {"Carro popular", "SUV", "Camionete", "Moto"};

        // Entrada
        auto horaEntrada = dadosHora();
        cout << "Horário de entrada: " << format("{:%H:%M:%S}", horaEntrada) << endl;

        // Saída
        auto horaSaida = dadosHora();
        cout << "Horário de entrada: " << format("{:%H:%M:%S}", horaSaida) << endl;

        cout << "Tipo de veículo:" << endl;
        for(size_t i = 0; i < modelos.size(); i++){cout << 1 + i << " - " << modelos[i] << endl;}
        int opc;
        cin >> opc;

        double valorTotal = 0;

        switch(opc)
        {
            case 1:
                valorTotal = calcTotal(horaEntrada, horaSaida, 2);
                cout << "Valor Total: R$" << valorTotal << endl;
                break;
              
            case 2:
                valorTotal = calcTotal(horaEntrada, horaSaida, 3);
                cout << "Valor Total: R$" << valorTotal << endl;
                break;
            
            case 3:
                valorTotal = calcTotal(horaEntrada, horaSaida, 4);
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
    getchar();
    return 0;
}