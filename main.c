#include "fonctions.h"
void intEnChar(int instruction, char ligneHexa[]);
int main(int argc, char * argv[])
{
	char fichierSource[] = "in.txt";
	char fichierDestination[] = "out.txt";
	char ligne[50];
	char* ligneHexa[8];
	int i=1;

	while (lireFichier(fichierSource, ligne, i)) // tant qu'il reste des lignes à lire
	{
		ecrireFichier(fichierDestination, ligne);
		i++;
	}
	intEnChar(254, &ligneHexa);
	printf(ligneHexa);
	return 0;
}

void intEnChar(int instruction, char ligneHexa[])
{
	const char hexa[] = "0123456789ABCDEF";
	short aConvertir; //nombre sur 4bits à convertir en 1 caractere hexa

	for (int i = 0; i < 8; i++)
	{
		aConvertir = instruction>>4*i;
		aConvertir = aConvertir & 0x0000000F;
		ligneHexa[7-i] = hexa[aConvertir];
	}
}