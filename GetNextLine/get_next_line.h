/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imurugar <imurugar@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 18:27:49 by aiblanco          #+#    #+#             */
/*   Updated: 2023/08/31 20:29:25 by imurugar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>//Argumentos función Open
# include <unistd.h>//Write y Open
# include <stdio.h>//Null, printf y (argc, argv [])
# include <stdlib.h>//Malloc y free
# include <string.h>//Null y size-t

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