#include<iostream>
#include<conio.h>

using namespace std;

int main(){
   setlocale(LC_ALL, "Portuguese");
   double sal_a, sal_n, prc;
   
   cout << "Salário atual: ";
   cin >> sal_a;
   
   cout << "% de aumento: ";
   cin >> prc;
   
   sal_a += sal_a*(prc/100);
   
   cout << "Salário corrigido: " <<  sal_a;
   
   cin.ignore();
   getchar();

}
