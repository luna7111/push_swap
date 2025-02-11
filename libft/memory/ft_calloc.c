/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_calloc.c                                    .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:39:52 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/27 11:39:49 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*allocated_memory;
	size_t	i;

	if (size && nmemb > SIZE_MAX / size)
		return (NULL);
	i = size * nmemb;
	allocated_memory = (char *)malloc(nmemb * size);
	if (!allocated_memory)
		return (NULL);
	while (i-- > 0)
		allocated_memory[i] = '\0';
	return (allocated_memory);
}
