#include <iostream>
//Biblioteca que habilita o uso de cout e cin
#include <conio.h>
#include <windows.h>
//Biblioteca que define a página de código para UTF8, para acentuação
#include <iomanip>
//Biblioteca necessária para formatação de casas decimais
#include <cmath>
//Biblioteca necessária para a função trunc
#include <vector>
/*Habilita a estrutura de dados std::vector, que é um vetor dinâmico 
(uma lista cujo tamanho pode crescer ou diminuir).*/
#include <string>
//Habilita o tipo de dado std::string, usado para armazenar textos#include <iostream>

using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	double c = 0;
	
	cout << "Temperatura °C: " << endl;
	cin >> c;
	
	double f = c*1.8 + 32;
	
	cout << "Temperatura em °F: " << f;
	
	getch();
	return 0;
}