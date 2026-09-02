#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	setlocale (LC_ALL, "PORTUGUESE");
	
	float base, altura, area;
	
	cout << "Base: ";
	cin >> base;
	
	cout << "Altura: ";
	cin >> altura;
	
	area = base * altura;
	
	cout << "Área: " << area;
	
	getchar();
}
