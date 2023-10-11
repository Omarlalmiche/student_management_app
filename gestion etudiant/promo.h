#ifndef PROMO_H
#define PROMO_H
#include"etudiant.h"
#include<vector>
#include<iostream>
using namespace std;
class promo
{
	private:
		vector<etudiant*>te;
	public:
		promo();
		~promo();
		ajouter(etudiant*);
		modifier(string);
		supprimer(string);
		lister();
		int rechercher(string);
		int rechercher2(string);
		save();
		load();
};

#endif
