#ifndef COMPTECLIENT_H
#define COMPTECLIENT_H

#include <QTcpSocket>

class CompteClient : public QTcpSocket
{
private:
    int numCompte;
    float solde;
public:
    CompteClient(QObject *parent=nullptr);
    bool Retirer(float montant);
    void Deposer(float montant);
    float ObtenirSolde();
    void DefinirNumCompte(int nc);
    int ObtenirNumCompte();
};

#endif // COMPTECLIENT_H
