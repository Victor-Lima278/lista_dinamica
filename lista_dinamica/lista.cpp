#include "Lista.hpp"

Lista::Lista() : inicio(nullptr), tamanho(0) {}

Lista::~Lista() {
    limpar();
}

bool Lista::vazia() const {
    return tamanho == 0;
}

int Lista::obterTamanho() const {
    return tamanho;
}

bool Lista::obterElemento(int pos, int &valor) const {
    if (pos < 1 || pos > tamanho) return false;
    No* atual = inicio;
    for (int i = 1; i < pos; i++) {
        atual = atual->prox;
    }
    valor = atual->valor;
    return true;
}

bool Lista::modificarElemento(int pos, int valor) {
    if (pos < 1 || pos > tamanho) return false;
    No* atual = inicio;
    for (int i = 1; i < pos; i++) {
        atual = atual->prox;
    }
    atual->valor = valor;
    return true;
}

bool Lista::inserirElemento(int pos, int valor) {
    if (pos < 1 || pos > tamanho+1) return false;

    No* novo = new No(valor);
    if (pos == 1) {
        novo->prox = inicio;
        inicio = novo;
    } else {
        No* atual = inicio;
        for (int i = 1; i < pos-1; i++) {
            atual = atual->prox;
        }
        novo->prox = atual->prox;
        atual->prox = novo;
    }
    tamanho++;
    return true;
}

bool Lista::removerElemento(int pos) {
    if (pos < 1 || pos > tamanho) return false;

    No* removido;
    if (pos == 1) {
        removido = inicio;
        inicio = inicio->prox;
    } else {
        No* atual = inicio;
        for (int i = 1; i < pos-1; i++) {
            atual = atual->prox;
        }
        removido = atual->prox;
        atual->prox = removido->prox;
    }
    delete removido;
    tamanho--;
    return true;
}

void Lista::imprimir() const {
    if (vazia()) {
        cout << "Lista vazia.\n";
        return;
    }
    No* atual = inicio;
    cout << "Lista: ";
    while (atual) {
        cout << atual->valor << (atual->prox ? ' ' : '\n');
        atual = atual->prox;
    }
}

void Lista::limpar() {
    while (!vazia()) {
        removerElemento(1);
    }
}
