/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sheferna <sheferna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 20:58:00 by jamedina          #+#    #+#             */
/*   Updated: 2023/07/09 17:33:57 by sheferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




void	ft_putchar(char a)
{
	write(1, &a, 1);
}