#include "fonctions.h"

int main(int argc, char * argv[]) {
	char fichierSource[] = "in5.txt";
	char fichierDestination[] = "out.txt";
	char ligne[TAILLE_LIGNE];
	char ligneHexa[9];
	int numeroLigne = 1;
	int etatLigne = 0;

	//Ouvrir un fichier en écriture efface tout son contenu, cela permet d'avoir un fichier out directement nettoyé pour éviter de devoir le faire à chaque fois.
	FILE * out = fopen("out.txt", "w");
	fclose(out);


	while ((etatLigne = lireFichier(fichierSource, ligne, numeroLigne)) != -1) { // tant qu'il reste des lignes à lire
		if(etatLigne == 1) {
			
			intEnChar(traduction_dec(ligne, fichierSource, numeroLigne), ligneHexa);
			ecrireFichier(fichierDestination, ligneHexa);
		}
		numeroLigne += 1;
	}

	return (0);
}
