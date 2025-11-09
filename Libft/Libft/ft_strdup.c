
#include "libft.h"

char *ft_strdup(const char *s)
{
	char *s2;
	size_t len;
	int i;

	len = ft_strlen(s);
	s2 = malloc(1 + len * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
