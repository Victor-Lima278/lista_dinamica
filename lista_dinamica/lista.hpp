#ifndef LISTA_HPP
#define LISTA_HPP

#include <iostream>
using namespace std;

class Lista {
private:
    struct No {
        int valor;
        No* prox;
        No(int v) : valor(v), prox(nullptr) {}
    };
    No* inicio;
    int tamanho;

public:
    Lista();
    ~Lista();

    bool vazia() const;
    int obterTamanho() const;

    bool obterElemento(int pos, int &valor) const;
    bool modificarElemento(int pos, int valor);
    bool inserirElemento(int pos, int valor);
    bool removerElemento(int pos);
    void imprimir() const;

    void limpar(); // Esvaziar a lista
};

#endif
