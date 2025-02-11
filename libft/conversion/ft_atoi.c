/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_atoi.c                                      .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:39:30 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/27 11:39:43 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_atoi(const char *nptr)
{
	int	number;
	int	sign;

	sign = 1;
	number = 0;
	while (*nptr == ' ' || (*nptr <= '\r' && *nptr >= '\t'))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr ++;
	}
	while (ft_isdigit(*nptr))
	{
		number *= 10;
		number += *nptr - '0';
		nptr++;
	}
	return (number * sign);
}
