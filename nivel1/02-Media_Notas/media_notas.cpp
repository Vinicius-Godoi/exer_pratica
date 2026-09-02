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
	
	//Os números de entrada devem ser decimais, caso contrário, o programa arredondará o resultado
	double nt1, nt2, nt3 = 0;
	
	cout << "1ª Nota: " << endl;
	cin >> nt1;
	cout << "2ª Nota: " << endl;
	cin >> nt2;
	cout << "3ª Nota: " << endl;
	cin >> nt3;
	
	double md = (nt1+nt2+nt3) / 3;
	
	cout << fixed << setprecision(2);
	//Define quantas casas decimais serão exibidas 
	cout << "A média do aluno é: " << md;
	
	getch();
	return 0;
}