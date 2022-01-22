#include "Impot.h"
#include "ParckGratuit.h"

#include <string>
#include <iostream>

using namespace std;

Impot::Impot(string Nom, Case *Ptsuivante, int Taxe) : Case(Nom, Ptsuivante){
    taxe=Taxe;
}

void Impot::arreterSur(Joueur* player){
    cout << "Hello je suis une case impot" <<endl;
    if(m_name == "taxe de luxe"){
        int taxe = 10000;
    }else{
        int taxe = 20000;
    }

    cout << player->getNom() << " s'est arreté sur " << m_name << ", la taxe est de " << taxe <<" francs"<< endl;
    int payement = min(player->getSolde(), taxe);
    player->debiter(payement);
    cout << player->getNom() << " paie " << payement << " francs de taxe"<< endl;

    Case* c = this;
    while(c->getName() != "parck gratuit"){
        c = c->getSuivante();
    }

    ParckGratuit* p = (ParckGratuit*)c;
    p->addcagnotte(payement);
}

void Impot::settaxe(int i) {
    taxe = i;
}

int Impot::gettaxe() {
    return taxe;
}
