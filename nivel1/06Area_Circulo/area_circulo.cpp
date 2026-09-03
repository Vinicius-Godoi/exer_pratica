#include<iostream>
#include<conio.h>

using namespace std;

int main(){
   setlocale(LC_ALL, "Portuguese");
   double r;
   
   cout << "Informe o raio do círculo: ";
   cin >> r;
   
   cout << "A área do círculo é: " << 3.14*(r*r);
   
   cin.ignore();
   getchar();
}
