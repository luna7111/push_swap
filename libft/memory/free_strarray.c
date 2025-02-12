/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   free_strarray.c                                .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2025/02/12 10:37:19 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2025/02/12 10:37:36 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	free_strarray(char **array)
{
	int	i;

	if (array == NULL)
		return ;
	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		i++;
	}
	free(array);
}
