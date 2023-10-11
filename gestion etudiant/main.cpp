#include"personne.h"
#include"etudiant.h"
#include"promo.h"
#include<vector>
#include<conio.h>

inferieur(vector<etudiant*> &te,etudiant*e)
{
	string s,s1;
	e=new etudiant(s,s1);
	int x;
	cout<<"Donner une note :";
	cin>>x;
		
		
		

		for(int i=0;i<te.size();i++)
	{
		if(x<te[i]->getnote())
		{
		cout<<"voici le cin : "<<te[i]->getcin()<<endl;
		cout<<"voici le numero d'etudiant : "<<te[i]->getne()<<endl;
		cout<<"voici l age : "<<te[i]->getage()<<endl;
		cout<<"voici le nom : "<<te[i]->getnom()<<endl;
		cout<<"voici le prenom : "<<te[i]->getprenom()<<endl;
		cout<<"voici le niveau : "<<te[i]->getniveau()<<endl;
		cout<<"voici la note  :"<<te[i]->getnote()<<endl;
		cout<<"voici la date de naissance : "<<te[i]->getdate().j<<"/"<<te[i]->getdate().m<<"/"<<te[i]->getdate().a<<endl;
		}
	
	}

	
}


int menu(int &choix)
{	
	cout<<"                     _____Voici la gestion d'Etudiant_____						"<<endl;
	cout<<"1-Ajouter un etudiant"<<endl<<"2-modifier un etudiant"<<endl<<"3-supprimer un etudiant"<<endl<<"4-lister les etudiants"<<endl<<"5-utiliser les operateur makhedamch  "<<endl<<"6-Afficher le nombre d'etudiant"<<endl<<"7-Quitter"<<endl<<endl<<"   veuillez saisir votre choix :";
	cin>>choix;
	system("cls");
}
int menu2(int &op)
{
	cout<<"a-Inferieur"<<endl<<"b-Superieur"<<endl<<"c-Egal"<<"d-Retour"<<endl;
	cin>>op;
	system("cls");
}
main()
{
	promo p;
	etudiant* e;
	int choix,op=0;
	string s,s1;
	p.load();
	do
	{
		menu(choix);
		switch(choix)
		{
			case 1:
			p.ajouter(e);
			
		    break;
		
		case 2:
			cout<<"Veuillez sasir le cin pour modifier : ";
			cin>>s;
			p.modifier(s);
		break;
		
		case 3:
			cout<<"Veuillez sasir le cin pour modifier : ";
			cin>>s;
			p.supprimer(s);
		break;
		
		case 4:
			p.lister();
		break;
		
		case 5:
	
        case 6:
       	cout<<"voici le nombre d'etudiant : "<<etudiant::nbetudiant()<<endl;
        	
        break;
        case 7:
        	break;
		default : break;
		}
		getch();
	}while(choix!=7);
p.save();
}


