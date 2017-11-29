//
//  Testing.h
//  libft
//
//  Created by Marcus Florentin on 26/10/2017.
//  Copyright © 2017 Marcus Florentin. All rights reserved.
//

#ifndef Testing_h
#define Testing_h

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#include <time.h>

#include "display.h"
#include "libft.h"

#define NBFT 35

void testing(int parm[], char *ft_name[]);
void my_print(const char *str, size_t whErr, size_t len, int *parm);
void off_print(const char *offstr, size_t len, int parm[]);
size_t set_error(const char *str, const char *offstr, size_t len, int parm[4]);
void my_sum(int parm[], char *ft_name[], int *ft_sum);
size_t my_cmp(const char *str, const char *off, size_t len);
const char *my_tronc(const char *str);

#endif /* Testing_h */
