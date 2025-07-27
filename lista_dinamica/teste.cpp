#include <cassert>
#include "Lista.hpp"

int main() {
    Lista lista;
    int valor;

    assert(lista.vazia());

    lista.inserirElemento(1, 10);
    lista.inserirElemento(2, 20);
    lista.inserirElemento(3, 30);

    assert(lista.obterTamanho() == 3);
    assert(lista.obterElemento(2, valor) && valor == 20);

    lista.modificarElemento(2, 99);
    assert(lista.obterElemento(2, valor) && valor == 99);

    lista.removerElemento(2);
    assert(lista.obterTamanho() == 2);

    lista.removerElemento(1);
    lista.removerElemento(1);
    assert(lista.vazia());

    return 0;
}
