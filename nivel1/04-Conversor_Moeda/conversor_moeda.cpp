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
	char escolha;
	double vlr, tot = 0.00;
	bool rpt = true;
	
	cout << "Para qual moeda deseja converter?" << endl;
	
	for (size_t i = 0; i < moedas.size(); ++i){
		cout << 1 + i << " - " << moedas[i] << endl;
	}
	cin >> escolha;
	
	
	 while (rpt == true)
    {  
        cout << "Valor: ";
        cin >> vlr;
    
        
            if (escolha == '1'){
            tot = 0.17 * vlr;
            rpt = false;
        }
        else if (escolha == '2')
        {
            tot = 0.19 * vlr;
            rpt = false;
        }
        else if (escolha == '3')
        {
            tot = 0.30 * vlr;
            rpt = false;
        }
        else
        {
            cout << "Opção inválida, tente novamente" << endl;
            rpt = true;
        }
    }
	cout << "Valor da conversão: " << setprecision(2) << tot << endl;
	
	

	return 0;
}