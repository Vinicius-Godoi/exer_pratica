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
//Habilita o tipo de dado std::string, usado para armazenar textos

using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	
	//Declaração das variáveis
	int n1, n2, tot = 0;
	char oper;

	//Entrada de dados
	cout << "Informe o primeiro número:" << endl;
	cin >> n1;
	
	cout << "Qual operação deseja realizar?\n"
			"+ - / * " << endl;
	cin >> oper;
		
	cout << "Informe o segundo número: " << endl;
	cin >> n2;
		
	
	//Processamento de dados
	if (oper == '+'){
		tot = n1+n2;
	}
	else if (oper == '-'){
		tot = n1-n2;
	}
	else if (oper == '/'){
		tot = n1/n2;
	}
	else if (oper == '*'){
		tot = n1*n2;
	}
	else{
		cout << "Operação inválida";
		return 0;
	}
	
	cout << fixed << setprecision(2);
	//Retorno dos dados
	cout << "O resultado é: " << tot << endl;
	
	getch();
	return 0;
	
}