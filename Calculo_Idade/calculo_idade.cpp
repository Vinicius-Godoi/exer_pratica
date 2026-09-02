#include <iostream>
#include <windows.h>


using namespace std;

int main() {
	SetConsoleOutputCP (CP_UTF8);
	SetConsoleCP (CP_UTF8);
	
	int idade, ano, a_atual;
	
	cout << "Informe o ano atual: " << endl;
	cin >> a_atual;
	
	cout << "Informe o ano em que nasceu: " << endl;
	cin >> ano;
	
	idade = a_atual - ano;
	
	cout << "Sua idade é: " << idade;
	
	return 0;
}