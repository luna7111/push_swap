/* ************************************************************************** */
/*                                                                            */
/*                                                    _.._  .           .     */
/*   ft_split.c                                     .' .-'`        *          */
/*                                                 /  /       +        *      */
/*   By: ldel-val <ldel-val@student.42madrid.com>  |  |           *           */
/*                                                 \  '.___.;       +         */
/*   Created: 2024/10/26 15:43:47 by ldel-val       '._  _.'   .        .     */
/*   Updated: 2024/10/27 11:39:54 by ldel-val          ``                     */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	word_count;
	size_t	i;

	word_count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			word_count++;
		i ++;
	}
	return (word_count);
}

static char	*ft_get_word(char const *s, char c, size_t n)
{
	size_t	current_word;
	size_t	word_len;
	size_t	i;

	i = 0;
	current_word = 0;
	if (s[i] != c)
		current_word = 1;
	while (s[i] && current_word < n)
	{
		if (s[i] == c && s[i + 1] != c)
			current_word ++;
		i ++;
	}
	word_len = 0;
	while (s[i + word_len] != c && s[i + word_len])
		word_len ++;
	return (ft_substr(s, i, word_len));
}

static char	**ft_free_array(char **array, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(array[i]);
		i ++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	long	word_count;
	long	i;
	char	**split;

	word_count = ft_count_words(s, c);
	split = malloc(sizeof(char *) * (word_count + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		split[i] = ft_get_word(s, c, i + 1);
		if (!split[i])
			return (ft_free_array(split, i));
		i ++;
	}
	split[i] = NULL;
	return (split);
}
