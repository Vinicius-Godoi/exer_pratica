#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

void calcParc(double vlr){
    cout << "12x R$" << vlr/12 << endl 
         << "11x R$" << vlr/11 << endl 
         << "10x R$" << vlr/10 << endl 
         << "9x R$" << vlr/9 << endl 
         << "8x R$" << vlr/8 << endl
         << "7x R$" << vlr/7 << endl
         << "6x R$" << vlr/6 << endl
         << "5x R$" << vlr/5 << endl
         << "4x R$" << vlr/4 << endl
         << "3x R$" << vlr/3 << endl
         << "2x R$" << vlr/2 << endl;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    double vlrCompra = 0;

    cout << "Valor da compra: R$";
    cin >> vlrCompra;

    /*cout << "\nNúmero de parcelas: ";
    cin >> nParcelas;*/

    //vlrParcela  calcParc(vlrCompra, nParcelas);

    cout << fixed << setprecision(2);
    cout << "\n\nPARCELAMENTO: \n";
    calcParc(vlrCompra);

    cin.ignore();
    getchar();
    return 0;
}