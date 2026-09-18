#include <iostream>
#include <windows.h>
#include <chrono>
#include <format>

// APRENDENDO A TRABALHAR COM TEMPO NO C++

using namespace std;
using namespace std::chrono;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // 1. VARIÁVEL COM O HORÁRIO COMPLETO
    // Armazena a duração total desde a meia-noite (ex: 14:30:45)
    auto horario_completo = 14h + 30min + 45s; 

    // 2. EXTRAINDO PARA VARIÁVEIS SEPARADAS (C++20)
    // O hh_mm_ss quebra a duração total nas partes de um relógio
    hh_mm_ss relogio{horario_completo};

    hours   minha_hora    = relogio.hours();
    minutes meu_minuto   = relogio.minutes();
    seconds meu_segundo   = relogio.seconds();

    // 3. CRIANDO VARIÁVEIS SEPARADAS MANUAMENTE
    hours   h_func = 8h;
    minutes m_func = 15min;
    seconds s_func = 0s;

    // Juntando as variáveis separadas em um horário completo
    auto outro_horario_completo = h_func + m_func + s_func;

    // Exibindo os resultados
    cout << "Horario completo 1: " << format("{:%H:%M:%S}\n", horario_completo);
    cout << h_func.count() << " horas" << endl;
    cout << "Horas: " << minha_hora.count() << "h | ";
    cout << "Minutos: " << meu_minuto.count() << "m | ";
    cout << "Segundos: " << meu_segundo.count() << "s\n\n";

    cout << "Horario completo 2: " << format("{:%H:%M:%S}\n", outro_horario_completo);

    getchar();
    return 0;
}