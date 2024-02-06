/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurugar <imurugar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:52:10 by aiblanco          #+#    #+#             */
/*   Updated: 2023/08/31 20:29:28 by imurugar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>//Argumentos función Open
# include <unistd.h>//Write y Open
# include <stdio.h>//Null y printf
# include <stdlib.h>//Malloc y free
# include <string.h>//Null y size-t
# include <limits.h>//OPEN_MAX para generar el numero de posiciones maximo
# include "stdarg.h"//Argumentos infinitos para funciones 

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
size_t	strleng_gnl(const char *str);
char	*ft_strjoin_gnl(char *s1, char *s2);
void	*freeft(char *str);

#endif
