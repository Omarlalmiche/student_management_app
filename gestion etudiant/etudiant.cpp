#include "etudiant.h"
#include"personne.h"

int etudiant::nbe=0;
etudiant::etudiant(string s,string s1):personne(s),ne(s1)
{
	niveau=0;
	nbe++;
	note=0;
}
etudiant::~etudiant()
{
	nbe--;
}
string etudiant::getne()
{
	return ne;
}
int etudiant::getniveau()
{
	return niveau;
}
void etudiant::setniveau(int niveau)
{
	this->niveau=niveau;
}
int etudiant::nbetudiant()
{
	return nbe;
}
int etudiant::getnote()
{
	return note;
}
void etudiant::setnote(float note)
{
	this->note=note;
}
