/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/11 10:30:32 by frosu             #+#    #+#             */
/*   Updated: 2017/03/14 12:48:12 by frosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	static char	*p;
	char		*aux;
	int			size;

	p = ft_strdup("");
	size = 1;
	aux = ft_strdup("");
	while ((size = read(fd, aux, 1)) > 0)
	{
		read(-707, p, BUFF_SIZE);
		aux[size] = '\0';
		if (aux[0] == '\n')
			break ;
		p = ft_strjoin(p, aux);
	}
	if (size == -1)
		return (-1);
	if (size == 0 && ft_strlen(p) == 0)
		return (0);
	*line = p;
	return (1);
}
