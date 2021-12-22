

#include <iostream>
#include <math.h>
#include "Case.h"

using namespace std;

Case::Case(string name, Case* ptsuivante): m_name(name) {
	m_ptsuivante = ptsuivante;
}


string Case::getName() {
	return m_name;
}

void Case::setName(string n) {
	m_name = n;
}

Case* Case::getSuivante() {
	return m_ptsuivante;
}

void Case::SetSuivante(Case* ptsuivante) {
	m_ptsuivante = ptsuivante;	
}

Jeu* Case::getJeuEnCours() {
	return m_jeuEnCours;
}

void Case::setJeuEnCours(Jeu* jeuEnCours) {
	m_jeuEnCours = jeuEnCours;	
}
