/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinsaeki <shinsaeki@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:52:11 by shinsaeki         #+#    #+#             */
/*   Updated: 2023/10/18 17:31:16 by shinsaeki        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <readline/readline.h>
#include <readline/history.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char	*line;

	while (1)
	{
		line = readline("prompt> ");
		if (strcmp(line, "quit") == 0)
		{
			free(line);
			break ;
		}
		if (line && *line)
		{
			add_history(line);
			printf("%s\n", line);
			free(line);
		}
	}
	clear_history();
	return (0);
}