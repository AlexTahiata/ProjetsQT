#include "compteclient.h"

CompteClient::CompteClient(QObject *parent):QTcpSocket(parent)
{

}

bool CompteClient::Retirer(float montant)
{
    solde -= montant;
}

void CompteClient::Deposer(float montant)
{
    solde += montant;
}

float CompteClient::ObtenirSolde()
{
    return solde;
}

void CompteClient::DefinirNumCompte(int nc)
{
    numCompte = nc;
}

int CompteClient::ObtenirNumCompte()
{
    return numCompte;
}
