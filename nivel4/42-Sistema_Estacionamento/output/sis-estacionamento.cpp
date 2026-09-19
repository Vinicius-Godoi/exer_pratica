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

// Estrutura para organizar as taxas por tipo de veículo
struct Veiculo{
    string nome;
    double valorHora;
};

// Funções
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
        if(hora < 0 || hora > 23)
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
    }
}
int listaValores(const vector<Veiculo>& lista) {
    cout << "\nTipo de veículo:" << endl;
    for (size_t i = 0; i < lista.size(); i++) {
        cout << i + 1 << " - " << lista[i].nome 
             << " = R$" << fixed << setprecision(2) << lista[i].valorHora << "/hora" << endl;
    }

    int opcao;
    while (true) {
        cout << "Opção: ";
        if (!(cin >> opcao) || opcao < 1 || opcao > static_cast<int>(lista.size())) {
            cout << "Opção inválida. Digite um número de 1 a " << lista.size() << ".\n" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }
        return opcao - 1; // Retorna o índice base 0
    }
}
double calcTotal(auto entrada, auto saida, double valorHora){
    auto permSeg = saida - entrada;

    if(permSeg.count() < 0){
        permSeg += hours(24);
    }

    minutes permMin = duration_cast<minutes>(permSeg);

    cout << "Permanencia: " << permMin.count() << " minutos" << endl;

    if(permMin.count() <= 10)
    {
        valorHora = 0;
        cout << "Tempo de permanência dentro da carência." << endl;
    }

    // Cobrança proporcional ao tempo em horas
    double taxaPorMinuto = valorHora / 60.0;
    return permMin.count() * taxaPorMinuto;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    while(true)
    {
        const vector<Veiculo> frota = {
            {"Carro popular", 12.00},
            {"SUV", 15.00},
            {"Camionete", 18.00},
            {"Moto", 6.00}
        };

        cout << "ESTACIONAMENTO\n" << "\nEntrada →" << endl;
        // Entrada
        auto horaEntrada = inputHora();
        cout << "\nHorário de entrada: " << format("{:%H:%M:%S}", horaEntrada) << endl;

        cout << "\nSaída →" << endl;
        // Saída
        auto horaSaida = inputHora();
        cout << "\nHorário de saída: " << format("{:%H:%M:%S}", horaSaida) << endl;

        int indexVeiculo = listaValores(frota);
        double valorTotal = calcTotal(horaEntrada, horaSaida, frota[indexVeiculo].valorHora);

        cout << fixed << setprecision(2) << endl;
        cout << "Valor Total: R$" << valorTotal << endl;

        char repeat;
        cout << "\nDeseja repetir? (S/N): ";
        cin >> repeat;

        if(tolower(repeat) == 's'){
            cout << "\n----------------------------------------\n\n";
            continue;
        }
        
        break;
    }

    cin.ignore();
    return 0;
}