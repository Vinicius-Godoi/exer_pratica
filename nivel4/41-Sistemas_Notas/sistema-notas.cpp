/*O programa deve: 
• receber nome do aluno;  
• receber três notas;  
• calcular a média;  
• informar se foi aprovado;  
• apresentar uma mensagem adequada.*/

#include <iostream>
#include <windows.h>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    string nomeAluno;
    int escolha = 0;
    double nota = 0, media = 0;
    const vector<string> notas = {"Nota 1", "Nota 2", "Nota 3"};
    const vector<string> aluno = {"João Pedro", "Maria Joaquina", "Carlos Eduardo", "Viviane Godoi"};

    for(size_t i = 0; i < aluno.size(); ++i)
    {cout << 1 + i << " - " << aluno[i] << endl;}
    cout << "\nSelecione o aluno: ";
    cin >> escolha;
    cout << endl << aluno[escolha-1];

    cout << "\n\nInforme as notas: " << endl;
    for(size_t i = 0; i < notas.size(); ++i)
    {
        cout << notas[i] << ": ";
        cin >> nota;
        
        media += nota;
    }

    cout << endl;
    media = media / notas.size();

    cout << fixed << setprecision(1);
    cout << "SITUAÇÃO FINAL:\n" << endl;

    if(media < 6)
    {cout << "MÉDIA FINAL: " << media << "\nREPROVADO! A média final está abaixo do mínimo (6)" << endl;}
    else if(media == 6)
    {cout << "MÉDIA FINAL: " << media << "\nAPROVADO! Obteve média mínima necessária para passar (6)" << endl;}
    else if(media > 6)
    {cout << "MÉDIA FINAL: " << media << "\nAPROVADO! Obteve média maior que a mínima necessária para passar (6)" << endl;}

    cin.ignore();
    getchar();
    return 0;
}