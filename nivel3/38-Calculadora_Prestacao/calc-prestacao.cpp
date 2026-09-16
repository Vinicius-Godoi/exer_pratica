#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

// Calcula uma compra parcelada.
// Recebe o valor da compra e o valor de entrada. Então retorna o valor e quantidade de parcelas.

void calcParcela(int maxParcela, int minParcela, double valor)
{
    for(int i = maxParcela; i >= minParcela; --i)
    {
        cout << fixed << setprecision(2);
        cout << i << "x - R$" << valor / i << endl;
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    double vlrCompra = 0, vlrEntrada = 0;
    int minParcela = 8;
    while(true){
        cout << "Valor da compra: R$";
        cin >> vlrCompra;
        if(!vlrCompra)
        {
            cout << "\nÉ necessário entrar com números!" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        cout << "\nValor de entrada: R$";
        cin >> vlrEntrada;
        if(!vlrEntrada)
        {
            cout << "\nÉ necessário entrar com números!" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        // Validação dos valores de acordo com os critérios do programa.
        if(vlrCompra <= 0 || vlrEntrada <= 0)
        {
            cout << "\nOs valores devem ser maiores que 0!\n" << endl;
            continue;
        }  
        if(vlrCompra <= vlrEntrada)
        {
            cout << "\nO valor da entrada deve ser menor que o valor total da compra!\n" << endl;
            continue;
        }

        double vlrFinal = vlrCompra - vlrEntrada;

        int maxParcela = 0;
        cout << "\nNº máximo das parcelas: ";
        cin >> maxParcela;
        if(!maxParcela)
        {
            cout << "\nÉ necessário entrar com números!" << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        if(maxParcela < minParcela)
        {
            cout << "\nO mínimo de parcelas deve ser " << minParcela << endl;
            continue;
        }
        
        cout << "\n\nValor Final: R$" << vlrFinal << "\nPARCELAS:" << endl;
        calcParcela(maxParcela, minParcela, vlrFinal);

        break;
    }
    

    cin.ignore();
    getchar();
    return 0;
}