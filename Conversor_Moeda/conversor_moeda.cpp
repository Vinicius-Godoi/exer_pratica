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
	
	const vector<string> moedas={
		"Euro",
		"Dolar",
		"Peso"
	};
	
	//for (string_f )
	
	
	cout << "Para qual moeda deseja converter?" << endl;
	

	return 0;
}