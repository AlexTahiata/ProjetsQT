#include "barquette.h"

Barquette::Barquette(int _emplacement, int _codeProduit, QObject *parent):
    QThread(parent),
    emplacement(_emplacement),
    codeProduit(_codeProduit)
{

}

void Barquette::run()
{
    int numEjecteur = 0;
    quint8 masque = 0x01;
    bool frontMontant = false;

    while (numEjecteur < emplacement)
    {
        mutex.acquire();
        if ((frontMontant & numEjecteur) == masque)
        {
            frontMontant = true;
        } else if (frontMontant == true) {
            numEjecteur = numEjecteur + 1;
            masque = masque + 1;
            frontMontant = false;
}
    }
    emit EjecteurTrouve(); // émet le signal
}

QString Barquette::ObtenirCodeProduit()
{
    return codeProduit;
}
