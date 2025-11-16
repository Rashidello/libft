#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	s3 = malloc(l1 + l2 + 1);
	if (!s3)
		return (NULL);
	l1 = 0;
	l2 = 0;
	while (s1[l1])
	{
		s3[l2++] = s1[l1++];
	}
	l1 = 0;
	while (s2[l1])
	{
		s3[l2++] = s2[l1++];
	}
	s3[l2] = '\0';
	return (s3);
}
