#include "Pilha.h"
namespace jp{
Pilha::Pilha(int tamanho):
    tamanho(0),
    topo(-1),
    array(0)
{
    if(tamanho <= 0) throw QString("Tamanho nao pode ser <= 0");
    try {
        array = new int[tamanho];
        this->tamanho = tamanho;
    } catch (std::bad_alloc &erro) {
        throw QString("Maquina sem memoria -- vai comprar");
    }
}
Pilha::~Pilha(){
   if(array) delete [] array;
}

bool Pilha::estaVazia() const{
    return (topo == -1);
}
bool Pilha::estaCheia() const{
   return (topo == tamanho-1);
}
void Pilha::inserir(int elemento){
    if (this->estaCheia())throw QString("Pilha esta cheia");
    topo++;
    *(array+topo) = elemento;
}
int Pilha::retirar(){
    if (this->estaVazia())throw QString("Pilha esta vazia");
    int valor = *(array+topo);
    topo--;
    return valor;
}
int Pilha::acessar() const{
    if (this->estaVazia())throw QString("Pilha esta vazia");
    return *(array+topo);
}
}
