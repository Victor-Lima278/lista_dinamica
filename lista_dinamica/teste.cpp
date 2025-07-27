#include <cassert>
#include <iostream>
#include "Lista.hpp"
using namespace std;

int main() {
    Lista lista;
    int valor;

    cout << "Iniciando testes da lista encadeada...\n";

    // Teste: lista vazia
    assert(lista.vazia());
    cout << "[OK] Lista criada vazia.\n";
    lista.imprimir();  // Deve mostrar "Lista vazia."

    // Teste: inserções
    lista.inserirElemento(1, 10);
    lista.inserirElemento(2, 20);
    lista.inserirElemento(3, 30);
    assert(lista.obterTamanho() == 3);
    cout << "[OK] Inserção de 3 elementos.\n";
    lista.imprimir();  // Deve mostrar "10 20 30"

    // Teste: obter elemento
    assert(lista.obterElemento(2, valor) && valor == 20);
    cout << "[OK] Obter elemento da posição 2 (valor 20).\n";

    // Teste: modificar elemento
    lista.modificarElemento(2, 99);
    assert(lista.obterElemento(2, valor) && valor == 99);
    cout << "[OK] Modificar elemento da posição 2 para 99.\n";
    lista.imprimir();  // Deve mostrar "10 99 30"

    // Teste: remoção
    lista.removerElemento(2);
    assert(lista.obterTamanho() == 2);
    cout << "[OK] Remoção do elemento na posição 2.\n";
    lista.imprimir();  // Deve mostrar "10 30"

    // Teste: esvaziar a lista
    lista.removerElemento(1);
    lista.removerElemento(1);
    assert(lista.vazia());
    cout << "[OK] Lista esvaziada corretamente.\n";
    lista.imprimir();  // Deve mostrar "Lista vazia."

    cout << "\nTodos os testes passaram com sucesso!\n";
    return 0;
}
