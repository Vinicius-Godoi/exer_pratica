#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main(){
   setlocale(LC_ALL,"PORTUGUESE");
   double vlr, desc, tot;
   
   cout << "Valor do Produto: ";
   cin >> vlr;
   
   cout << "% de desconto: ";
   cin >> desc;
   
   tot = vlr - (vlr * (desc/100));
   
   cout << fixed << setprecision(2);
   cout << "Valor final: " <<  tot;
   
   cin.ignore();
   getchar();
}
