#ifndef PERSONNE_H
#define PERSONNE_H
#include<iostream>
using namespace std;
struct date
{
	int a,m,j;
};
class personne
{
	private:
		const string cin;
		int age;
		string nom;
		string prenom;
		date d;
	public:
		personne(string);
		~personne();
		string getcin();
		string getnom();
		string getprenom();
		float getage();
		date getdate();
		void setage(float);
		void setnom(string);
		void setprenom(string);
		void setdate(date);	
};

#endif
