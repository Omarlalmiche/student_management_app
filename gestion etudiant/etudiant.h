#ifndef ETUDIANT_H
#define ETUDIANT_H
#include"personne.h"
#include<iostream>
using namespace std;

class etudiant : public personne
{
	private:
		const string ne;
		int niveau;
		static int nbe;
		float note;

		
	public:
		static int nbetudiant();
		etudiant(string,string);
		~etudiant();
		string getne();
		int getniveau();
		void setniveau(int);
		int getnote();
		void setnote(float);
};

#endif
