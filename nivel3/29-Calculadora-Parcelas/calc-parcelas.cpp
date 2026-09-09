#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

void calcParc(double vlr, int parc){
    cout << fixed << setprecision(2);

    for(int i = parc; i >=2; --i){
        cout << i << "x R$" << vlr/i << '\n';
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    double compra = 0;
    int nParc = 0;

    cout << "Valor da compra: R$";
    cin >> compra;

    char pag;
    cout << "\nQual a forma de pagamento?\n 1- À Vista  2- Parcelado" << endl;
    cin >> pag;
    
    switch (pag){
        case '1':
            cout << "\nÀ VISTA: " << endl;

            cout << "VALOR TOTAL: R$" << compra - (compra*0.10) << " [10% de desconto]" << endl;
            break;
        case '2':
            cout << "\nPARCELAMENTO: " << endl;
            cout << "MAX parcelas: ";
            cin >> nParc;
           
            calcParc(compra, nParc);
    }
    

    cin.ignore();
    getchar();
    return 0;
}