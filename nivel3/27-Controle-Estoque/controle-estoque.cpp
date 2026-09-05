#include <iostream>
#include <windows.h>
#include <vector>
#include <string>

using namespace std;

int maisEstoque(int estoqueItem, int quantidade){
    estoqueItem += quantidade;

    cout << "Quantidade adicionada ao estoque: " << quantidade << "\nTotal de estoque: " << estoqueItem << endl;

    return 0;
}
int menosEstoque(int estoqueItem, int quantidade){
    if (estoqueItem == 0)
    {
        cout << "Estoque zerado!" << endl;
        return 1;
    }
    estoqueItem -= quantidade;

    cout << "Quantidade adicionada ao estoque: " << quantidade << "\nTotal de estoque: " << estoqueItem << endl;

    return 0;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
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
        
        int bola = 0, carro = 0, boneca = 0;
        int add = 0, sub = 0;

        char opcao;
        string movEstoque;
        cin >> opcao;
        switch (opcao){
            case '1':
                cout << "Qual operação deseja realizar?\nadd - Adicionar ao estoque      sub - Descontar do estoque" << endl;
                cin >> movEstoque;
                if (movEstoque == "add") {
                        cout << "Quantidade a adicionar: ";
                        cin >> add;

                        maisEstoque(bola, add);
                } else if (movEstoque == "sub") {
                        cout << "Quantidade a descontar: ";
                        cin >> sub;

                        menosEstoque(bola, sub);
                }

                break;
            
            case '2':
                cout << "Qual operação deseja realizar?\nadd - Adicionar ao estoque      sub - Descontar do estoque" << endl;
                cin >>movEstoque;   
                if (movEstoque == "add") {
                        cout << "Quantidade a adicionar: ";
                        cin >> add;

                        maisEstoque(carro, add);
                } else if (movEstoque == "sub") {
                        cout << "Quantidade a descontar: ";
                        cin >> sub;

                        menosEstoque(carro, sub);
                }
                
                break;

            case '3':
                cout << "Qual operação deseja realizar?\nadd - Adicionar ao estoque      sub - Descontar do estoque" << endl;
                cin >>movEstoque;
                if (movEstoque == "add") {
                        cout << "Quantidade a adicionar: ";
                        cin >> add;

                        maisEstoque(boneca, add);
                } else if (movEstoque == "sub") {
                        cout << "Quantidade a descontar: ";
                        cin >> sub;

                        menosEstoque(boneca, sub);
                }
                
                break;

        }
        
        char repeat;
        cout << "Deseja continuar? (s)" << endl;
        cin >> repeat;

        if (tolower(repeat) == 's') {continue;}

        break;
    }
    return 0;
}