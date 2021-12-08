#include "fonctions.h"

//lit la ligne du fichier (de numéro(commence à 1) passé en parametre), sans \n
//retourne 1 si la ligne existe, 0 sinon
bool lireFichier(char nomFichier[], char ligne[], int numeroLigne)
{
	FILE *  fichier = fopen(nomFichier, "r");
    const int TAILLE=50;
	char i_ligne[TAILLE];
	int i=0;
	bool ligneExiste = 0;

	while ((fgets(i_ligne, TAILLE, fichier) != NULL) && (i<numeroLigne)) //parcoure le fichier jusqu'à la ligne n° numeroLigne (ou la fin)
	{

		if(i == numeroLigne-1)
		{
			strcpy(ligne, i_ligne);
			ligneExiste = 1;
		}
		i++;
	}
	fclose(fichier);
	//suppression du \n éventuel
	if(ligneExiste)
	{
		if(ligne[strlen(ligne)-1] == '\n')
			ligne[strlen(ligne)-1] = 0;
	}
	
	return ligneExiste;
}

//ecrit une ligne dans le fichier (gère le /n)
//va à la ligne si on le l'est pas déjà
void ecrireFichier(char nomFichier[], char donnees[])
{
	FILE * fichier;
    char caractere = '\n';

    //vérifie si on est à la ligne
    fichier = fopen(nomFichier, "r"); 
    while (!feof(fichier))
    {
        fscanf(fichier, "%c", &caractere);
    }
    fclose(fichier);

	fichier = fopen(nomFichier, "a"); //ouvre en mode append
    //va à la ligne si on ne l'était pas
    if(caractere != '\n')
    {
        fputs("\n", fichier);
    }
	fputs(donnees, fichier); //ajoute la chaine à la fin du fichier
	fclose(fichier);
}