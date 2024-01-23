#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

static int	counter_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static int	counter_letters(void)
{
}

char	**ft_split(char const *s, char c)
{
}

int	main(void)
{
	return (0);
}