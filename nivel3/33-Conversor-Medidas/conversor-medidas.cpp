#include <iostream>
#include <windows.h>
#include <vector>
#include <string>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    char opc;
    double cm = 0, mt = 0, km = 0;

    const vector<string> medida =
    {
        "Centímetros",
        "Metros",
        "Quilometros"
    };

    cout << "Qual tipo de medida irá inserir?";
    for(size_t i = 0; i <= medida.size(); ++i)
    {
        cout << 1+i << " - " << medida[i] << endl;
    }

    return 0;
}