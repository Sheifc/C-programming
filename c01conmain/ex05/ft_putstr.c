/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:47:29 by sheferna          #+#    #+#             */
/*   Updated: 2023/07/10 15:44:51 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putstr(char *str)
{
	int i;

	i = 0; 
	while (str[i] != '\0') // un string acaba en '\0', se puede obviar
	{
		write(1, &str[i], 1);
		i++;
	}
}
	
int	main(void)
{
	char string[] = "hola";
	ft_putstr(string);
	return (0);

	// Otro modo: 
	// char* c; 
	// c = "hola";
	// ft_putstr(c);
}
