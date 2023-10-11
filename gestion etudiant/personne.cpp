#include "personne.h"


personne::personne(string s):cin(s)
{
	age=0;
	nom="";
	prenom="";
	d.j=0;
	d.a=0;
	d.m=0;
}
personne::~personne()
{
	
}

string personne::getcin()
{
	return cin;
}
string personne::getnom()
{
	return nom;
}
string personne::getprenom()
{
	return prenom;
}
float personne::getage()
{
	return age;
}
date personne::getdate()
{
	return d;
}
void personne::setage(float age)
{
	this->age=age;
}
void personne::setnom(string nom)
{
	this->nom=nom;
}
void personne::setprenom(string prenom)
{
	this->prenom=prenom;
}
void personne::setdate(date d)
{
	this->d=d;
}
