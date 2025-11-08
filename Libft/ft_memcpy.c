

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t 			i;
	unsigned char	*dst;
	unsigned char	*sr;
	
	i = 0;
	dst = (unsigned char *)dest;
	sr = (unsigned char	*)src;
	while(n > i)
	{ 	
		dst[i] = sr[i];
		i++;
	}
	return (dst);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char h[] = "bllyaaaaat";
// 	char l[20];
// 	printf("og --> %s\n", memcpy(l,h, 7));
// 	printf("ft --> %s", ft_memcpy(l,h, 7));
	
// }