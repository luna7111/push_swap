/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_strjoin.c                                   .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:44:23 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/27 11:39:54 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	string1_len;
	size_t	string2_len;

	if (!s1 || !s2)
		return (NULL);
	string1_len = ft_strlen(s1);
	string2_len = ft_strlen(s2);
	s = (char *)malloc(sizeof(char) * (string1_len + string2_len + 1));
	if (!s)
		return (NULL);
	ft_strlcpy(s, s1, string1_len + 1);
	ft_strlcat(s, s2, string1_len + string2_len + 1);
	return (s);
}
