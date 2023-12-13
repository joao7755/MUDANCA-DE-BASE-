#ifndef MUDARBASE_H
#define MUDARBASE_H
#include <Pilha.h>
#include <QString>

namespace jp{
class MudarBase
{
private:
    int numeroBase10;
    int base;
public:
    MudarBase(int numeroBase10,int base);
    ~MudarBase();

    QString CalcularMudanca();
};
}
#endif // MUDARBASE_H
