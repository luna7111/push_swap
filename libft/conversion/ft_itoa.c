/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_itoa.c                                      .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:40:54 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/27 11:39:43 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_itoa(int n)
{
	char	*allocated_memory;
	int		size;

	size = ft_itob(n);
	allocated_memory = (char *)malloc(sizeof(char) * (size + 1));
	if (!allocated_memory)
		return (NULL);
	if (n == -2147483648)
		return (ft_memcpy(allocated_memory, "-2147483648", 12));
	allocated_memory[size] = '\0';
	if (n == 0)
		*allocated_memory = '0';
	if (n < 0)
	{
		allocated_memory[0] = '-';
		n *= -1;
	}
	while (n)
	{
		allocated_memory[size - 1] = (n % 10) + '0';
		n /= 10;
		size --;
	}
	return (allocated_memory);
}
