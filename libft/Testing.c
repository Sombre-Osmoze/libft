//
//  Testing.c
//  libft
//
//  Created by Marcus Florentin on 26/10/2017.
//  Copyright © 2017 Marcus Florentin. All rights reserved.
//

#include "Testing.h"


void testing(int parm[], char *ft_name[]) {

	/* Initialisation de la fonction "srand" */
	srand((int)time(NULL));

	int i = 0;

	int ft_sum[NBFT];
	while (i < NBFT) {
		ft_sum[i] = 0;
		i++; }
	i = 0;

	int  y = 0, alloc_len = 1, ft = 1, off = 2;

	char *str = NULL, *offstr = NULL;
	char *dst = NULL; char *offdst = NULL;
	char *gen = NULL;

	int error = 0;
	size_t whErr = -1;
	unsigned char c = '\0';
	unsigned char rtrn_t[2];
	size_t len = 0;

	int tottest = (rand() % (100 - 20 + 1)) + 20;
	printf( "\n\nTest %s (%d tests) : ", ft_name[ft - 1], tottest);


	while (strcmp(ft_name[ft - 1], "EOF") != 0 && i < tottest) {


		if (off == 2) {

			alloc_len = (rand() % (30 - 1 + 1)) + 1;
			len = (rand() % (alloc_len - 0 + 1));

			offstr = malloc(sizeof(char) * alloc_len);
			offdst = malloc(sizeof(char) * alloc_len);
			str = malloc(sizeof(char) * alloc_len);
			dst = malloc(sizeof(char) * alloc_len); }

		else if (off == 1) {
			if (error || parm[0])
				printf("\n\n   %s (Test n° %d/%d) ",  ft_name[ft - 1] + 3, i + 1, tottest); }
		else if (!off) {
			if (error || parm[0])
				printf("\n%s (Test n° %d/%d) ",  ft_name[ft - 1], i + 1, tottest); }



		switch (ft) {
			case 1:
				if (off == 2) {
					c = (rand() % (126 - 33 + 1)) + 33;
					memset(offstr, c, len);
					ft_memset(str, c, len); }
				else
					if (error || parm[0] || (error && parm[0])) {
						printf("[%d, ", alloc_len);
						textclr(&c, "35", parm);
						printf(",%zu] : ",len); }
				break;
			case 2:
				if (off == 2) {
					bzero(offstr, len);
					ft_bzero(str, len); }
				else
					if (error || parm[0])
						printf("[%d, %zu]", alloc_len, len);
				break;
			case 3:
				if (off == 2) {
					gen = malloc(sizeof(char) * alloc_len);
					for (y = 0; y < alloc_len; y++)
						gen[y] = (rand() % (226 - 33 + 1)) + 33;
					memcpy(offstr, gen, len);
					ft_memcpy(str, gen, len);  }
				else
					if (error || parm[0]) {
						printf("[%d, ", alloc_len);
						textclr(gen, "35", parm);
						printf(", %zu] : ", len); }
				break;

			case 4:

				if (off == 2) {
					c = (rand() % (126 - 33 + 1)) + 33;

					for (y = 0; y < alloc_len; y++) {
						gen[y] = (rand() % (226 - 33 + 1)) + 33;
						offstr[y] = (rand() % (226 - 33 + 1)) + 33; }

//
//						 memccpy(offstr, gen, c, len);
//						ft_memccpy(offstr, gen, c, len);

				}

				else
					if (error || parm[0]) {
						printf("[%d, ", alloc_len);

						if (off == 1) {
							textclr(offstr, "34", parm); printf(", ");
							textclr(gen, "33", parm);printf(", "); }
						else if (!off) {
							textclr(str, "34", parm); printf(", ");
							textclr(gen, "33", parm);printf(", "); }

						textclr(&c, "35", parm);
						printf(", %zu] : ", len);
						printf("(%c)  ",  rtrn_t[off]); }

				break;

			case 5:

				if (off == 2) {
					for (y = 0; y < alloc_len; y++) {
						gen[y] = (rand() % (226 - 33 + 1)) + 33;
						offstr[y] = (rand() % (226 - 33 + 1)) + 33; }

					memcpy(str, offstr, alloc_len);

					memmove(offstr, gen, len);
					ft_memmove(str, gen, len); }
				else
					if (error || parm[0]) {
						printf("[%d, ", alloc_len);

						if (off == 1) {
							textclr(offstr, "34", parm); printf(", "); }
						if (!off) {
							textclr(str, "34", parm); printf(", "); }
						textclr(gen, "33", parm);printf(", ");
						printf("%zu] : ", len);
						printf("(%c)  ",  rtrn_t[off]); }
				break;

			case 6:
				if (off == 2) {
					c = (rand() % (97 - 122 + 1)) + 33;
					for (y = 0; y < alloc_len; y++) {
						offstr[y] = (rand() % (97 - 122 + 1)) + 33; }
					memcpy(str, offstr, alloc_len);

					rtrn_t[1] = (unsigned char)memchr(offstr, c, len);
					rtrn_t[0] = (unsigned char)ft_memchr(str, c, len);

					if (rtrn_t[1] != rtrn_t[0])
						error = 1;

					 }
				else
					if (error || parm[0]) {

						printf("[%d, ", alloc_len);

						if (off == 1) {
							textclr(offstr, "35", parm); printf(", "); }
						if (!off) {
							textclr(str, "35", parm); printf(", "); }
						printf("%zu] : (", len);



						printf("(%c)  ",  rtrn_t[off]);
						if (!parm[2])
							couleur("0");
					}
				break;


			default: break; }


		if (off == 2) {
			off = 1;

			whErr = set_error(str, offstr, len, parm);
			if (whErr != len * 2) {
				error = 1;
				ft_sum[ft -1] = 1;
				if (!parm[4])
					parm[4] = 1; } }

		else if (off == 1) {
			if (error || parm[0])
				off_print(offstr, len, parm);

			off = 0; }

		else if (!off) {
			if (error || parm[0])
				my_print(str, whErr, len, parm);

			free(offstr); free(str);
			free(offdst); free(dst);
			free(gen);

			off = 2; i++;
			if (parm[0] || error)
				system("sleep 0.5");
			whErr = -1; error = 0; }


		if (i >= tottest) {

			tottest = (rand() % (100 - 20 + 1)) + 20; i = 0;

			if (!ft_sum[ft-1])
				textclr("OK\n\n", "1;32", parm);
			else
				textclr("\n\n        KO\n\n", "1;31", parm);

			error = 0; ft++;

			if (strcmp(ft_name[ft - 1], "EOF") != 0)
				printf( "\nTest %s (%d tests) : ", ft_name[ft - 1], tottest); } }


		my_sum(parm, ft_name, ft_sum);

	textclr("\n\n END OF TEST\n", "1;5;36", parm); }

void my_print(const char *str, size_t whErr,  size_t len, int parm[]) {

	size_t i = 0;

	if (!parm[2])
		couleur("32");

	while (i < len) {

		if (i >= whErr && !parm[2])
			couleur("31;1");
		printf("%c", str[i]);
		i++;
		 }

	if (!parm[2])
		couleur("0");

	while (str[i])
		printf("%c", str[i++]);

	printf("\n"); }

void off_print(const char *offstr, size_t len, int parm[]) {

	size_t i = 0;

	if (!parm[2])
		couleur("36");

	while (i < len)
		printf("%c", offstr[i++]);

	if (!parm[2])
		couleur("0");

	while (offstr[i])
		printf("%c", offstr[i++]);

	printf("\n"); }

size_t set_error(const char *str, const char *offstr, size_t len, int parm[]) {

	size_t result;


	result = my_cmp(str, offstr, len);
	if (result != len * 2)
		parm[4] = 1;

	return result; }

void my_sum(int parm[], char *ft_name[], int ft_sum[]) {

	if (parm[4]) {
		clrscr();
		printf("\n\n                          Résultat  :\n\n"); }

	int ft = 0;

	
	while (strcmp(ft_name[ft], "EOF") != 0  && (parm[4] || parm[0])) {

		printf("%s : ", ft_name[ft]);

		if (!ft_sum[ft])
			textclr("OK \n", "1;32", parm);
		else
			textclr("KO \n", "1;31", parm);
		ft++; }


	if (!parm[0]) {
		printf("Pour voir les test veuiller lancer le programme en mode debug : ");
		textclr("-D", "36", parm); }

	printf("\n");

}

size_t my_cmp(const char *str, const char *off, size_t len) {

	size_t i = 0;

	while (i < len) {
		if (str[i] != off[i])
			return i;
		i++;
	}
	return len;
}

