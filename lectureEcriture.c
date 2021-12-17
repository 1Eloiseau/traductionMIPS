#include "fonctions.h"

//lit la ligne du fichier (de numéro(commence à 1) passé en parametre), sans \n
//retourne 1 si la ligne existe, 0 si elle est vide/commentaire, -1 sinon (fin du fichier)
int lireFichier(char nomFichier[], char ligne[], int numeroLigne)
{
	FILE *  fichier = fopen(nomFichier, "r");
	char i_ligne[TAILLE_LIGNE];
	int i=0;
	int etatLigne = -1;
	int j = 0;

	while ((fgets(i_ligne, TAILLE_LIGNE, fichier) != NULL) && (i<numeroLigne)) { //parcoure le fichier jusqu'à la ligne n° numeroLigne (ou la fin)
		if(i == numeroLigne-1) {
			strcpy(ligne, i_ligne);
			while (i_ligne[j] == ' ') {
				j += 1;
			}
			if (i_ligne[j] == '#' || i_ligne[j] == '\n') {
				etatLigne = 0;
			} else {
				etatLigne = 1;
			}
		}
		i++;
	}
	fclose(fichier);
	//suppression du \n éventuel
	if(etatLigne != -1) {
		if(ligne[strlen(ligne)-1] == '\n')
			ligne[strlen(ligne)-1] = 0;
	}
	return etatLigne;
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