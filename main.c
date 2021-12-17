#include "fonctions.h"

int main(int argc, char * argv[])
{
	char fichierSource[] = "in.txt";
	char fichierDestination[] = "out.txt";
	char ligne[TAILLE_LIGNE];
	char ligneHexa[9];
	int numeroLigne = 1;
	int etatLigne = 0;

	while ((etatLigne = lireFichier(fichierSource, ligne, numeroLigne)) != -1) // tant qu'il reste des lignes à lire
	{
		if(etatLigne == 1) {
			intEnChar(traduction_dec(ligne, fichierSource, numeroLigne), ligneHexa);
			ecrireFichier(fichierDestination, ligneHexa);
		}
		printf("%d %d\n", numeroLigne, etatLigne);
		numeroLigne++;
	}

	return 0;
}
