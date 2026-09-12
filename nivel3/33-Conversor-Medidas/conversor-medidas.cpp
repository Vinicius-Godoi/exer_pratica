#include <iostream>
#include <windows.h>
#include <vector>
#include <string>

using namespace std;
// Um programa que converte medidas. O usuário entra com uma medida e fazemos a conversão dela para outras 
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    char opc;
    double cm = 0, mt = 0, km = 0;

    const vector<string> medida = {
        "Centímetros",
        "Metros",
        "Quilometros"
    };

    cout << "Qual tipo de medida irá inserir?" << endl;
    for(size_t i = 0; i < medida.size(); ++i)
    { cout << 1+i << " - " << medida[i] << endl; }
    cin >> opc;

    switch(opc){
        case '1':
            cout << "\nCentímetros: ";
            cin >> cm;

            mt = cm/100;
            km = cm/100000;

            cout << "\nMetros: " << mt << "\nQuilômetros: " << km;

            break;
        
        case '2':
            cout << "\nMetros: ";
            cin >> mt;

            cm = mt*100;
            km = mt/1000;

            cout << "\nCentímetros: " << cm << "\nQuilômetros: " << km;

            break;

        case '3':
            cout << "\nQuilômetros: ";
            cin >> km;

            cm = km * 100000;
            mt = km * 1000;

            cout << "\nCentímetros: " << cm << "\nMetros: " << mt;

            break;
    }


    cin.ignore();
    getchar();
    return 0;
}