#define _USE_MATH_DEFINES // Libera as constantes matemáticas como M_PI
#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

int main(){
	SetConsoleOutputCP (CP_UTF8);
	SetConsoleCP (CP_UTF8);
	
	double raio;
	
	cout << "Qual o valor do raio? ";
	cin >> raio;
	
	cout << "Área do círculo: " << M_PI * (raio*raio);
	
	getchar();
}
