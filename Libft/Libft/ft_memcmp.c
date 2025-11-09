#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	unsigned char *str1;
	unsigned char *str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if(str1[i] != str2[i])
			return (str1[i] - str2[i]);	
		i++;
	}
	return (0);
}
#include <stdio.h>
#include <string.h>

// declare your function
int ft_memcmp(const void *s1, const void *s2, size_t n);

int main(void)
{
    // Each test: description, inputs, and n
    struct {
        char *s1;
        char *s2;
        size_t n;
        char *desc;
    } tests[] = {
        {"hello", "hello", 5, "identical strings"},
        {"hello", "hEllo", 5, "differs at index 1"},
        {"hello", "hello", 0, "n = 0 (should be 0 always)"},
        {"abc\0xyz", "abc\0xyZ", 7, "contains nulls, differs after null"},
        {"abcd", "abce", 4, "differs at last character"},
        {"abcd", "abcf", 3, "differs after compared range (should be 0)"},
        {"12345", "123", 5, "second string shorter (memcmp doesn’t care)"},
        {"\xff\x00\x7f", "\xff\x00\x80", 3, "non-ASCII bytes"},
        {"", "", 1, "empty strings (1 byte)"},
    };

    int num_tests = sizeof(tests) / sizeof(tests[0]);

    for (int i = 0; i < num_tests; i++) {
        int ft = ft_memcmp(tests[i].s1, tests[i].s2, tests[i].n);
        int og = memcmp(tests[i].s1, tests[i].s2, tests[i].n);

        printf("\n--- Test %d: %s ---\n", i + 1, tests[i].desc);
        printf("s1: \"%s\"\n", tests[i].s1);
        printf("s2: \"%s\"\n", tests[i].s2);
        printf("n = %zu\n", tests[i].n);
        printf("ft_memcmp: %d\n", ft);
        printf("memcmp   : %d\n", og);
        printf("Result: %s\n", (ft == og) ? "✅ Match" : "❌ Mismatch");
    }

    return 0;
}
