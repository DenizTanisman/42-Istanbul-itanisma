/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itanisma <itanisma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 15:48:45 by itanisma          #+#    #+#             */
/*   Updated: 2026/04/04 15:59:43 by itanisma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// maini silmeyi unutma
#include <stdio.h>

#include "get_next_line.h"

char *get_next_line(int fd)
{
	char	buffer[101];
	int		byte_read;

	if(fd == -1)
		return ;
	
	while((byte_read = read(fd, buffer, 100)) > 0)
	{
		
	}
	close(fd);
	return (0);
}

int main()
{
	int fd = open("deneme.txt", O_RDONLY);
	get_next_line(fd);
}