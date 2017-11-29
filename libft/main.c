//
//  main.c
//  libft
//
//  Created by Marcus Florentin on 26/10/2017.
//  Copyright © 2017 Marcus Florentin. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#include "display.h"
/* Fonctions de testing */
#include "Testing.h"
/* fonctions de mémoire de la partie 1 */
#include "libft.h"

void it_man(void);



int main(int argc, const char * argv[]) {

	int test = 0;

	if (test)
	{
	/*
	 	Valeur du tableau "parm" ->

	 		parm[0] : mode debug
	 		parm[1] : .... test automatique
	 		parm[2] : .... Xcode
	 		parm[3] : .... global test
	 		parm[4] : variable didError
	 		parm[5] : ........ man

	 */
	int parm[6];

	int i = 0, j = 0;

	char *ft_name[NBFT + 1] = {
		"ft_memset", "ft_bzero", "ft_memcpy", "ft_memccpy",
		"ft_memmove", "ft_memchr", "ft_memcmp", "ft_strlen",
		"ft_strdup", "ft_strcpy", "ft_strncpy", "ft_strcat",
		"EOF"} ;

	char rep[10] = "";

	/* initialisation de toute les valeurs du tableau */
	while (i < 6) {
		parm[i] = 0;
		i++; }

	i = 0;

	if (argc > 1) {
		while (++i < argc) {

			if (argv[i][0] ==  '-') {
				j = 1;
				while (argv[i][j])
					switch (argv[i][j++]) {
						case 'D':
							parm[0] = 1;
							break;
						case 'm':
							parm[1] = 1;
							parm[3] = 1;
							break;
						case 'X':
							parm[2] = 1;
							break;
						default: break; } }

			else if (!strcmp(argv[i], "man"))
				parm[5] = 1; } }

	if (!parm[2])
		clrscr();

	if (!parm[5])
		textclr("\n\n                              Bienvenue dans cette séance de tests\n\n", "35", parm);
	else
		it_man();

	if (!parm[1] && !parm[5]) {
		textclr("Test Global ? ", "1", parm);
		scanf("%s", rep);

		if(!(strcmp(rep, "Oui")) || !(strcmp(rep, "oui")) || !(strcmp(rep, "Ui")) || !(strcmp(rep, "OUi")) || !(strcmp(rep, "OUI")))
			parm[3] = 1; }

	if (parm[3] && !parm[5])
		testing(parm, ft_name); }








	
	return 0;
}

void it_man() {

	printf("\n\n  MAN A ECRIR ICI !!!!!!!!!!!!\n\n"); }


