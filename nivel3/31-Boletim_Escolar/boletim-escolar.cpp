#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    float n1 = 0, n2 = 0, n3 = 0, n4 = 0, md = 0;

    cout << "BOLETIM ESCOLAR:\n\nNotas\n1ª Nota: ";
    cin >> n1;
    
    cout << "2ª Nota: ";
    cin >> n2;

    cout << "3ª Nota: ";
    cin >> n3;

    cout << "4ª Nota: ";
    cin >> n4;

    md = (n1+n2+n3+n4)/4;

    if(md >= 6)
    {
        cout << "\nMédia: " << md;
        cout << "\n\nSITUAÇÃO: Aprovado";
    }
    else if(md < 6)
    {
        cout << "\nMédia: " << md;
        cout << "\n\nSITUAÇÃO: Reprovado!\n(Nota abaixo a média 6 | Pontuação mínima de [" << 6-md << "] para passar)";
    }

    cin.ignore();
    getchar();
    return 0;
}