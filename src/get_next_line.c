/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fschmid <fschmid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 14:46:17 by fschmid           #+#    #+#             */
/*   Updated: 2022/10/21 15:13:18 by fschmid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		*buffer;
	static char	*left;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	read(fd, buffer, BUFFER_SIZE);
	return buffer;	
}

