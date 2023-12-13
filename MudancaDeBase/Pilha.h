#ifndef PILHA_H
#define PILHA_H
#include <QString>

namespace jp{
class Pilha
{
    //Atributos:
private:
    int tamanho;
    int topo;
    int *array;
public:
    Pilha(int tamanho);
    ~Pilha();
    bool estaVazia() const;
    bool estaCheia() const;
    void inserir(int elemento);
    int retirar();
    int acessar() const;

};
};

#endif // PILHA_H
