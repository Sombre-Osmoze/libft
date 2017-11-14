//
//  libft.h
//  libft
//
//  Created by Marcus Florentin on 13/11/2017.
//  Copyright © 2017 Marcus Florentin. All rights reserved.
//

#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>

#define NBFT  5

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(char *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);

#endif /* libft_h */
