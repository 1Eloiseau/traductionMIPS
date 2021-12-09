#include <stdio.h>

char mot[4];
void lecture_mot(char L[], int Nm){  //L est le tableau dans lequel le mot numéro Nm sera stocké. Donc si on a ADD R0, R1, R2 et on écrit lecture_mot (L, 2), le mot R0 qui est le second mot sera stocké dans la variable L.
    int i = 0;
    while (Nm != 1){
        while (ligne[i] != ' '){
            i += 1;
        Nm -= 1;
        i += 1;
    }
    while (ligne[i] != ' ' or ligne[i] = '\n'){
        if (ligne[i] != ',') {
            L[i] = ligne[i];
        }
        i += 1;
    }
    L[i] = '\n';
}

void numero_registre(int R, char mot[]);  //Regarde la chaîne de caractère contenue dans mot qui doit représenter un registre et stocke dans le numéro de ce registre
    if strcmp(mot, '$zero') or strcmp(mot,'$0') {
        R = 0;
    } else if strcmp(mot, '$at') or strcmp(mot,'$1') {
        R = 1;
    } else if strcmp(mot, '$v0') or strcmp(mot,'$2') {
        R = 2;
    } else if strcmp(mot, '$v1') or strcmp(mot,'$3') {
        R = 3;
    } else if strcmp(mot, '$a0') or strcmp(mot,'$4') {
        R = 4;
    } else if strcmp(mot, '$a1') or strcmp(mot,'$5') {
        R = 5;
    } else if strcmp(mot, '$a2') or strcmp(mot,'$6') {
        R = 6;
    } else if strcmp(mot, '$a3') or strcmp(mot,'$7') {
        R = 7;
    } else if strcmp(mot, '$t0') or strcmp(mot,'$8') {
        R = 8;
    } else if strcmp(mot, '$t1') or strcmp(mot,'$9') {
        R = 9;
    } else if strcmp(mot, '$t2') or strcmp(mot,'$10') {
        R = 10;
    } else if strcmp(mot, '$t3') or strcmp(mot,'$11') {
        R = 11;
    } else if strcmp(mot, '$t4') or strcmp(mot,'$12') {
        R = 12;
    } else if strcmp(mot, '$t5') or strcmp(mot,'$13') {
        R = 13;
    } else if strcmp(mot, '$t6') or strcmp(mot,'$14') {
        R = 14;
    } else if strcmp(mot, '$t7') or strcmp(mot,'$15') {
        R = 15;
    } else if strcmp(mot, '$t8') or strcmp(mot,'$24') {
        R = 24;
    } else if strcmp(mot, '$t9') or strcmp(mot,'$25') {
        R = 25;
    } else if strcmp(mot, '$s0') or strcmp(mot,'$16') {
        R = 16;
    } else if strcmp(mot, '$s1') or strcmp(mot,'$17') {
        R = 17;
    } else if strcmp(mot, '$s2') or strcmp(mot,'$18') {
        R = 18;
    } else if strcmp(mot, '$s3') or strcmp(mot,'$19') {
        R = 19;
    } else if strcmp(mot, '$s4') or strcmp(mot,'$20') {
        R = 20;
    } else if strcmp(mot, '$s5') or strcmp(mot,'$21') {
        R = 21;
    } else if strcmp(mot, '$s6') or strcmp(mot,'$22') {
        R = 22;
    } else if strcmp(mot, '$s7') or strcmp(mot,'$23') {
        R = 23;
    } else if strcmp(mot, '$k0') or strcmp(mot,'$26') {
        R = 26;
    } else if strcmp(mot, '$k1') or strcmp(mot,'$27') {
        R = 27;
    } else if strcmp(mot, '$gp') or strcmp(mot,'$28') {
        R = 28;
    } else if strcmp(mot, '$sp') or strcmp(mot,'$29') {
        R = 29;
    } else if strcmp(mot, '$fp') or strcmp(mot,'$30') {
        R = 30;
    } else if strcmp(mot, '$ra') or strcmp(mot,'$31') {
        R = 31;
    }
}

int puissance(int a, int p) {  //Retourne a puissance p. Utilisée pour la fonction juste en dessous.
    int b = 1;
    while (p != 0) {
        b *= a;
        p -= 1;
    }
    return (b);
}

int valeurDecimale (char S[]) {  //Retourne la valeur décimale d'une chaine de caractère, exemple : valeurDecimale('2021') = 2021 (entier). Cette fonction est utilisée pour celle en dessous.
    int i = 0;
    int n = strlen(S);
    int rang = puissance(10, n-1);
    int nbr = 0;
    int chiffre;
    while (S[i] != '\0') {
        chiffre = S[i] - 48;
        nbr =+ rang * chiffre;
        rang /= 10;
        i += 1;
    }
    return (nbr);
}

int valeur_mot (int R, char mot[]){  //S'il ne s'agit pas d'un registre ou d'un offset, il s'agit d'une valeur. Il faut donc supprimer le $ et transformer la chaine de caractère en décimale.
    char mot_temp = mot;
    int i = 1;  //Pour "sauter" le $
    int j = 0;
    while (mot[i] != '\n') {
        mot_temp[j] = mot[i]
        i += 1;
        j += 1;
    }
    mot_temp[j] = '\n';
    R = valeurDecimale(mot_temp);
    return (R);
}

void offset_mot (int offset[], char mot[]) {
    while 
    char mot_temp1 =  
}

lecture_mot(mot, 1);


if (strcmp(mot, 'ADD')){


    
} else if (strcmp(mot, 'AND')) {
    mot_bin[1] = '000000';
    mot_bin[6] = '100100';
} else if (strcmp(mot, 'DIV')) {
    mot_bin[1] = '000000';
    mot_bin[6] = '011010';
} else if (strcmp(mot, 'JR')) {
    mot_bin[1] = '000000';
    mot_bin[6] = '001000'
} else if (strcmp(mot, 'MFHI')) {
    mot_bin[1] = '000000';
    mot_bin[6] = '010000';
} else if (strcmp(mot, 'MFLO')) {
    mot_bin[1] = '000000';
    mot_bin[6] = '010010';
} else if (strcmp(mot, 'MULT')) {
    mot_bin[1] = '000000';
    mot_bin[6] = '011000';
} else if (strcmp(mot, 'NOP')) {
    mot_bin[1] = '000000';
    mot_bin[6] = '000000';
} else if (strcmp(mot, 'OR')) {
    mot_bin[1] = '000000';
    mot_bin[6] = '100101';
} else if (strcmp(mot, 'ROTR')) {
    mot_bin[1] = '000000';
    mot_bin[6] = '000010';
} else if (strcmp(mot, 'SLL')) {
    mot_bin[1] = '000000';
    mot_bin[6] = '000000'
} else if (strcmp(mot, 'SLT')) {
    mot_bin[1] = '000000';
    mot_bin[6] = '101010';
} else if (strcmp(mot, 'SRL')) {
    mot_bin[1] = '000000';
    mot_bin[6] = '000010';
} else if (strcmp(mot, 'SUB')) {
    mot_bin[1] = '000000';
    mot_bin[6] = '100010';
} else if (strcmp(mot, 'SKYCALL')) {
    mot_bin[1] = '000000';
    mot_bin[6] = '001100';
} else if (strcmp(mot, 'XOR')) {
    mot_bin[1] = '000000';
    mot_bin[6] = '100110';
} else if (strcmp(mot, 'ADDI')) {
    mot_bin[1] = '001000';
} else if (strcmp(mot, 'BEQ')) {
    mot_bin[1] = '000100';
} else if (strcmp(mot, 'BGTZ')) {
    mot_bin[1] = '000111';
} else if (strcmp(mot, 'BLEZ')) {
    mot_bin[1] = '000110';
} else if (strcmp(mot, 'BNE')) {
    mot_bin[1] = '000101';
} else if (strcmp(mot, 'J')) {
    mot_bin[1] = '000010';
} else if (strcmp(mot, 'JAL')) {
    mot_bin[1] = '000011';
} else if (strcmp(mot, 'LUI')) {
    mot_bin[1] = '001111';
} else if (strcmp(mot, 'LW')) {
    mot_bin[1] = '100011';
} else if (strcmp(mot, 'SW')) {
    mot_bin[1] = '101011';
}