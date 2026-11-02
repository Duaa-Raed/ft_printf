/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalinein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 08:24:34 by dalinein          #+#    #+#             */
/*   Updated: 2026/10/05 08:24:36 by dalinein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static void	free_split(char **split, int i)
{
	while (i > 0)
		free(split[--i]);
	free(split);
}

static int	fill_split(char const *s, char c, char **split)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			split[j] = ft_substr(s, start, i - start);
			if (!split[j])
			{
				free_split(split, j);
				return (0);
			}
			j++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = ft_calloc(count_words(s, c) + 1, sizeof(char *));
	if (!split)
		return (NULL);
	if (!fill_split(s, c, split))
		return (NULL);
	return (split);
}
int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("hello world 42", ' ');
	if (!result)
		return (1);
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
