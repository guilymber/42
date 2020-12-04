/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpassos- <gpassos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 18:13:54 by gpassos-          #+#    #+#             */
/*   Updated: 2020/11/29 20:11:42 by gpassos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		set_params(int *params, char *str)
{
	int		counter;
	int		index;

	index = 0;
	counter = 0;
	while (*(str + counter) != '\0')
	{
		if (*(str + counter) >= '1' && *(str + counter) <= '4')
		{
			*(params + index) = *(str + counter) - '0';
			index++;
		}
		else if (*(str + counter) == ' ')
		{
			counter++;
			continue;
		}
		else
			return (-1);
		counter++;
	}
	if (index == 16)
		return (0);
	else
		return (-1);
}

void	init_tab(int *grid)
{
	int x;
	int y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			*(grid + (x * 4 + y)) = 0;
			y++;
		}
		x++;
	}
}
