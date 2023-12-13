#include "Mudarbase.h"
#include "Pilha.h"
namespace jp{

MudarBase::MudarBase(int numeroBase10, int base):
    numeroBase10(numeroBase10),
    base(base)
{

}

MudarBase::~MudarBase()
{

}

QString jp::MudarBase::CalcularMudanca()
{
    jp::Pilha p(20);
    QString result = "";
    QString hexa = "0123456789ABCDEF";
    for (int aux=numeroBase10;aux>0;aux=aux/base){
        p.inserir(aux%base);
    }
    for(int aux=numeroBase10;aux>0;aux=aux/base){
    result += hexa[p.acessar()];
    p.retirar();
}
return result;


}
}
