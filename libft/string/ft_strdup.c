/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_strdup.c                                    .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:44:05 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/27 11:39:54 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s)
{
	char	*duplicated_string;

	duplicated_string = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!duplicated_string)
		return (NULL);
	ft_strlcpy(duplicated_string, s, ft_strlen(s) + 1);
	return (duplicated_string);
}
