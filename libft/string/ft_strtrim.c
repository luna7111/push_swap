/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_strtrim.c                                   .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:48:32 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/27 11:39:55 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start ++;
	end = ft_strlen(s1) - 1;
	while (end && ft_strchr(set, s1[end]))
		end --;
	if (end < start)
		return (ft_calloc(1, sizeof(char)));
	return (ft_substr(s1, start, end - start + 1));
}
