#ifndef INTERFACEACCESBDBANQUE_H
#define INTERFACEACCESBDBANQUE_H

#include <QWidget>
#include <QDebug>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>

class InterfaceAccesBDBanque
{
private:
    QSqlDatabase bdd;
public:
    InterfaceAccesBDBanque(QString hote, QString login, QString mdp);
    float ObtenirSoldeNumCompte();
    void MettreAJourLesSolde(int numCompte, float nouveauSolde);
    void CreerCompte(int numCompte);
    bool CompteExiste(int numCompte);
};

#endif // INTERFACEACCESBDBANQUE_H
