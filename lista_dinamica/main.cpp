#include <iostream>
#include "Lista.hpp"
using namespace std;

int main() {
    Lista lista;
    int opcao, valor, pos;

    do {
        cout << "\n [MENU] \n";
        cout << "1. Verificar se lista esta vazia\n";
        cout << "2. Obter tamanho da lista\n";
        cout << "3. Obter valor em posicao\n";
        cout << "4. Modificar valor em posicao\n";
        cout << "5. Inserir elemento\n";
        cout << "6. Remover elemento\n";
        cout << "7. Imprimir lista\n";
        cout << "8. limpar lista\n";
        cout << "0. Sair\n";
        cout << "Escolha: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << (lista.vazia() ? "Lista esta vazia.\n" : "Lista nao esta vazia.\n");
                break;
            case 2:
                cout << "Tamanho: " << lista.obterTamanho() << "\n";
                break;
            case 3:
                cout << "Posicao: "; cin >> pos;
                if (lista.obterElemento(pos, valor)) cout << "Valor: " << valor << "\n";
                else cout << "Posicao invalida!\n";
                break;
            case 4:
                cout << "Posicao: "; cin >> pos;
                cout << "Novo valor: "; cin >> valor;
                if (lista.modificarElemento(pos, valor)) cout << "Modificado!\n";
                else cout << "Posicao invalida!\n";
                break;
            case 5:
                cout << "Posicao para inserir: "; cin >> pos;
                cout << "Valor: "; cin >> valor;
                if (lista.inserirElemento(pos, valor)) cout << "Inserido!\n";
                else cout << "Erro ao inserir!\n";
                break;
            case 6:
                cout << "Posicao para remover: "; cin >> pos;
                if (lista.removerElemento(pos)) cout << "Removido!\n";
                else cout << "Erro ao remover!\n";
                break;
            case 7:
                lista.imprimir();
                break;
            case 8:
                lista.limpar();
                cout << "Lista esvaziada.\n";
                break;
            case 0:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opcao invalida!\n";
        }
    } while (opcao != 0);

    return 0;
}
