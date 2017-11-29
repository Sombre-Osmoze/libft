//
//  display.c
//  libft
//
//  Created by Marcus Florentin on 31/10/2017.
//  Copyright © 2017 Marcus Florentin. All rights reserved.
//

#include "display.h"

void textclr(void *txt, char *fontclr, int parm[]) {

	if (!parm[2])
		printf("\033[%sm",fontclr);


	printf("%s",txt);

	if (!parm[2])
		printf("\033[%sm","0"); }
