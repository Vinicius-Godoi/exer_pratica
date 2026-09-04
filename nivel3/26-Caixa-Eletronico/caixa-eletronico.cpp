#include <iostream>
#include <windows.h>
#include <format>
#include <string>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int valor = 0;

    cout << "Valor a sacar: R$";

    while (true)
    {
        // Validação que certifica que a entrada seja um número inteiro
        if (!(cin >> valor))
        {
            cout << "Entrada inválida! Digite apenas números inteiros.\n" << endl;
            cin.clear();
            cin.ignore(10000, 'n');
            continue; // Volta para o início do while e o executa novamente 
        }

        // Exige que o valor seja no mínimo 4 e que será divisivel por 2
        if (valor < 4 || valor == 5 || (valor % 2 != 0 && valor < 5)) {
            // Trata 1, 3 e entradas inválidas
            cout << "Valor indisponível para saque com as notas atuais." << endl;
            continue;
        }

        break; // Se passar pelos dois if, encerra o while e continua o restante do código
    }

    int saldo = valor;

    // Cálculo usando o operador de resto (%) para simplificar
    int cem = saldo / 100;   saldo %= 100;
    int cinqu = saldo / 50;  saldo %= 50;
    int vinte = saldo / 20;  saldo %= 20;
    int dez = saldo / 10;    saldo %= 10;

    // Para a nota de 5: só pegamos se o valor restante for ÍMPAR.
    // Se for par (ex: 6 ou 8), pulamos a nota de 5 para usar apenas notas de 2.
    int cinco = 0;
    if (saldo % 2 != 0 && saldo >= 5) {
        cinco = 1;
        saldo -= 5;
    }

    // O que sobrou é sempre par e vai para as notas de 2   
    int dois = saldo / 2;    saldo %= 2;

    string saida = format(
        "Quantidade de cédulas:\n100: {}\n 50: {}\n 20: {}\n 10: {}\n  5: {}\n  2: {}",
        cem, cinqu, vinte, dez, cinco, dois
    );

    cout << "\n" << saida << endl;

    cin.ignore();
    cin.get();
    return 0;
}