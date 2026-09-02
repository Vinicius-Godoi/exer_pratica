#include <iostream>
#include <conio.h>
// <iomanip>: Biblioteca necessária para usar manipuladores de formatação de entrada e saída, como setw e setfill.
#include <iomanip>

using namespace std;

int main(){
	setlocale (LC_ALL, "PORTUGUESE");
	
	int seg_in, hr, min, seg_out;
	
	cout << "Informe o tempo em segundos: ";
	cin >> seg_in;
	
	hr = seg_in/3600;
	min = (seg_in % 3600) / 60;
	seg_out = seg_in % 60;
	
	// setw(2): Define a largura mínima de exibição em 2 caracteres para a variável que vem logo em seguida.
	// setfill('0'): Preenche os espaços em branco à esquerda com o caractere '0' caso o número tenha menos de 2 dígitos.
	cout << setfill('0') << setw(2) << hr << ":" << setw(2) << min << ":" << setw(2) << seg_out;
	
	getchar();
}
