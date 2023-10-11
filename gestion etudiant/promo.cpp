#include "promo.h"
#include "fstream"
using namespace std;
promo::promo()
{
	te.clear();
}
promo::~promo()
{
	te.clear();
}
promo::ajouter(etudiant* e)
{
	etudiant* h;
	promo p;
	string n,pr,s,s1;
	date d;
	int a,annee,jour,mois,niveau,note;

	do{
	cout<<" Veuillez entrer cin de l'etudiant" ;
	cin>>s;
	}while(p.rechercher(s)!=-1);		 
	do{
	cout<<" Veuillez entrer numero de l'etudiant" ;
	cin>>s1;
	}while(p.rechercher2(s1)!=-1);	
	
	h=new etudiant(s,s1);
		
		cout<<"Veuillez saisir l age de l'etudiant : ";
		cin>>a;
	    h->setage(a);
		cout<<"Veuillez saisir le nom de l'etudiant :";
		cin>>n;
	    h->setnom(n);
		cout<<"Veuillez saisir le prenom de l'etudiant : ";
		cin>>pr;
	    h->setprenom(pr);
		cout<<"veuillez saisir sa date de naissance"<<endl;
		cout<<"Annee : ";
		cin>>annee;
		cout<<"Mois : ";
		cin>>mois;
		cout<<"Jour : ";
		cin>>jour;
		d.a=annee;
		d.m=mois;
		d.j=jour;
		h->setdate(d);
		cout<<"Veuillez saisir le niveau de l'etudiant : ";
		cin>>niveau;
		cout<<"veuillez saisir la note : ";
		cin>>note;
		h->setnote(note);
		h->setniveau(niveau);
		te.push_back(h);
	

}
promo::modifier(string s)
{
	date d;
	int pos=rechercher(s);
	if(pos==-1)
	{
		cout<<"introuvable";
	}
	else
	{
		string n,pr;
		int note;
		int a,annee,mois,jour;
		cout<<"veuillez saisir l age   :";
		cin>>a;
		te[pos]->setage(a);
		cout<<"veuillez saisir le nom   :";
		cin>>n;
		te[pos]->setnom(n);
		cout<<"veuillez saisir le prenom   :";
		cin>>pr;
		te[pos]->setprenom(pr);
		cout<<"veuillez saisir la date    :";
		cout<<"veuillez saisir l'annee    :";
		cin>>annee;
		cout<<"veuillez saisir le mois   : ";
		cin>>mois;
		cout<<"veuillez saisir le jour    : ";
		cin>>jour;
		d.a=annee;
		d.m=mois;
		d.j=jour;
		te[pos]->setdate(d);
		cout<<"veuillez saisir la note   : ";
		cin>>note;
		te[pos]->setnote(note);
	}
}
promo::supprimer(string s)
{
	int pos=rechercher(s);
	if(pos==-1)
	{
		cout<<"introuvable";
	}
	else
	{	
		te.erase(te.begin()+pos);
	}
}
promo::lister()
{
	for(int i=0;i<te.size();i++)
	{
		cout<<"voici le cin : "<<te[i]->getcin()<<endl;
		cout<<"voici le numero d'etudiant : "<<te[i]->getne()<<endl;
		cout<<"voici l age : "<<te[i]->getage()<<endl;
		cout<<"voici le nom : "<<te[i]->getnom()<<endl;
		cout<<"voici le prenom : "<<te[i]->getprenom()<<endl;
		cout<<"voici le niveau : "<<te[i]->getniveau()<<endl;
		cout<<"voici la note  :"<<te[i]->getnote()<<endl;
		cout<<"voici la date de naissance : "<<te[i]->getdate().j<<"/"<<te[i]->getdate().m<<"/"<<te[i]->getdate().a<<endl;
		cout<<"-------"<<endl;
	}
}
int promo::rechercher(string s)
{
	for(int i=0;i<te.size();i++)
	{
		if(s==te[i]->getcin())
		{
			return i;
		}
	}
	return -1;
}

int promo::rechercher2(string s1)
{
	for(int i=0;i<te.size();i++)
	{
		if(s1==te[i]->getne())
		{
			return i;
		}
	}
	return -1;
}



promo::save()
{
ofstream f("f.txt",ios::out);
	if(f){
		for(int i=0;i<te.size();i++)
	 {

 f<<"CIN:"<<te[i]->getcin()<<"  numetudiant:"<<te[i]->getne()<<"   age:"<<te[i]->getage()<<"  nom:"<<te[i]->getnom()<<"  prenom:"<<te[i]->getprenom()<<"  niveau:"<<te[i]->getniveau()<<"  le date:"<<te[i]->getdate().j<<"/"<<te[i]->getdate().m<<"/"<<te[i]->getdate().a<<endl;
	
	 }
	 f.close();
	}
	else
	{
		cerr<<"erreur d'ouverture du fichier'";
	}
}



promo::load()
{
		ifstream f("f.txt", ios::in );
		if(f)
			{
			string n,p,s,s1;
			date d;
			int a,annee,jour,mois,niveau,taille;
			string prenom,nom;
			f>>taille;
			for(int i=0;i<taille;i++)
			{
	
				f>>s;
				f>>s1;
			    f>>a;
			    f>>nom;
			    f>>prenom;
			    f>>niveau;
			    f>>annee;
			    f>>jour;
			    f>>mois;
			    f>>d.a;
			    f>>d.m;
			    f>>d.j;
			    	etudiant *h=new etudiant(s,s1);
				h->setage(a);
				h->setnom(nom);
				h->setprenom(prenom);
				h->setniveau(niveau);
				h->setdate(d);
				te.push_back(h);

			}
				f.close();
			}
			else
			{
				cerr<<"the file is empty!"<<endl;
			}

}
