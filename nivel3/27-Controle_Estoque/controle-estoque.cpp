#include <iostream>
#include <windows.h>
#include <vector>
#include <string>

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int bola = 0, carro = 0, boneca = 0;
    int add = 0, sub = 0;

    while(true)
    {
        const vector<string> itens = {
            "Bola",
            "Carrinhos",
            "Bonecas"
        };
        cout << "Informe o item do estoque: " << endl;
        for(size_t i = 0; i < itens.size(); ++i )
        {
            cout << 1+i << " - " << itens[i] << endl;
        }

        char opcao;
        string movEstoque;

        cin >> opcao;
        switch (opcao){
            // Bola
            case '1':
                cout << "\nEstoque Bola: " << bola << endl;

                cout << "\nQual operação deseja realizar?\n\nadd - Adicionar ao estoque      sub - Descontar do estoque" << endl;
                cin >> movEstoque;

                if (movEstoque == "add") {

                    cout << "\nQuantidade a adicionar: ";
                    cin >> add;

                    bola += add;

                    cout << "\nEstoque Bola: " << bola << endl;
            } 
                else if (movEstoque == "sub") {
                    cout << "\nQuantidade a descontar: ";
                    cin >> sub;

                    bola -= sub;

                    cout << "\nEstoque Bola: " << bola << endl;
                }
                
                break;
            // Carrinho
            case '2':
                cout << "\nEstoque Carrinho: " << carro << endl;

                cout << "\nQual operação deseja realizar?\n\nadd - Adicionar ao estoque      sub - Descontar do estoque" << endl;
                cin >>movEstoque; 

                if (movEstoque == "add") {
                    cout << "\nQuantidade a adicionar: ";
                    cin >> add;

                    carro += add;

                    cout << "\nEstoque Carrinho: " << carro << endl;
                } 
                else if (movEstoque == "sub") {
                    cout << "\nQuantidade a descontar: ";
                    cin >> sub;

                    carro -= sub;

                    cout << "\nEstoque Carrinho: " << bola << endl;
                }
                
                break;
            // Boneca
            case '3':
                cout << "\nEstoque Boneca: " << boneca << endl;

                cout << "\nQual operação deseja realizar?\n\nadd - Adicionar ao estoque      sub - Descontar do estoque" << endl;
                cin >>movEstoque;

                if (movEstoque == "add") {
                    cout << "\nQuantidade a adicionar: ";
                    cin >> add;

                    boneca += add;

                    cout << "\nEstoque Boneca: " << boneca << endl;
                } 
                else if (movEstoque == "sub") {
                    cout << "\nQuantidade a descontar: ";
                    cin >> sub;

                    boneca -= sub;

                    cout << "\nEstoque Boneca: " << boneca << endl;
                }
                
                break;

        }
        
        char repeat;
        cout << "\n\nDeseja continuar? (s)" << endl;
        cin >> repeat;

        if (tolower(repeat) == 's') {continue;}

        break;
    }

    return 0;
}