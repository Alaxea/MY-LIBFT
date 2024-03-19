#include "libft.h"
#include <stdio.h>

int main()
{
	printf ("alpha:%d\n", ft_isalpha('c'));
	printf ("digit:%d\n", ft_isdigit('c'));
	printf ("ascii:%d\n", ft_isascii('c'));
	printf ("alphanumeric:%d\n", ft_isalnum('c'));
	printf ("print:%d\n", ft_isprint('c'));
	printf ("strlen:%ld\n", ft_strlen("abcd"));

	char str[50] = "hello my friend";
	ft_memset(str, 'a', 3);
	printf ("After memset: %s\n", str);

	char exe[20] = "programming";
	ft_bzero(exe, 3);
	printf ("After bzero:%s\n", exe);

	char sen[] = "coding is great";
	char dest[18];
	ft_memcpy(dest, sen, 18);
	printf("After memcpy:%s\n", dest);

	char zda[] = "born to code";
	char dst[1];
	ft_memmove(dst, zda, 10);
	printf("After memmove:%s\n", dst);

	char doc[] = "what's up?";
	char wyj[] = "gorgeous";
	ft_strlcpy(doc, wyj, 20);
	printf ("After strlcpy:%s\n", doc);

	char ddd[] = "it is too late";
	char sss[] = "I like reading books";
	ft_strlcat(ddd, sss, 10);
	printf ("After strlcat:%s\n", ddd);

	char c = 'l';
	printf ("toupper:%c\n", ft_toupper(c));

	char z = 'K';
	printf ("tolower:%c\n", ft_tolower(z));

	char txt[] = "hello world";
	ft_putendl_fd(txt, 1);
	printf("After putendl_fd:%s\n", txt);

	char mst[] = "lol123456o7";
	int ch = 'o';
	char *arc = ft_strrchr(mst, ch);
        if (arc == NULL)
                printf("I did not find any character\n");
        else
                printf("I found character at position:%ld\n", (arc - str + 1));


	char lol[] = "niedz04A";
	char f = 'k';
	char *ach = ft_strrchr(lol, f);
	if (ach == NULL)
		printf("I did not find any character\n");
	else
		printf("I found character at position:%ld\n", (ach - str + 1));

	char s1[] = "424242";
	char s2[] = "424242";
	if (ft_strncmp(s1, s2, 3) == 0)
		printf ("First three symbols are identical\n");
	else
		printf ("First three symbols are not identical\n");

	char eee[] = "sunday is great";
	char w = 'e';
	char *result = ft_memchr(eee, w, sizeof(eee));
	if (result != NULL)
		printf ("I found character '%c' at position %ld\n", w, (char*)result - eee);
	else
		printf ("I did not find this character in the string\n");

	char st1[] = "abcd";
	char st2[] = "azcd";
	if (ft_memcmp(st1, st2, 2) == 0)
		printf ("First two symbols are identical\n");
	else
		printf ("First two symbols are not identical\n");

	char big[] = "new computers";
	char little[] = "computers";
	char *res = ft_strnstr(big, little, ft_strlen(big));
	if (res != NULL)
		ft_putendl_fd(res, 1);
	else
		ft_putendl_fd("I did not find substring\n", 1);

	int nb = 4244;
	ft_putnbr_fd(nb, 1);
	printf("\n");

	char *test_strings[] = {"45aa67", "-456", "-2147483648"};
	int resultat = ft_atoi(test_strings[0]);
	printf ("String:%s, Converted value:%d\n", test_strings[0], resultat);

	int	*ptr;
	ptr = (int *)ft_calloc(15, ft_strlen(str));
	if (ptr == NULL)
		printf("Memory did not allocate\n");
	else
		printf("Memory allocated with success\n");

	char	source[] = "hey guys";
	char	destination[] = "go to the party";
	ft_putstr_fd(ft_strdup(source), 1);
	ft_putstr_fd(ft_strdup(destination), 1);

	char sq[] = "1234567";
	printf("%s\n", ft_substr(sq, 0, 4));

        char string1[] = "haha";
        char string2[] = "coco";
        printf("%s\n", ft_strjoin(string1, string2));

	char s11[] = "where is my book?";
	char s22[] = "book";
	ft_putendl_fd(ft_strtrim(s11, s22), 1);

	char *u = "Hello there, guy!";
	char **v = ft_split(u, ' ');
	while (*v)
		printf("%s\n", *v++);

	int numberr = 42444341;
	//int numberrr = -5438574;
	printf("Len:%d\n", int_len(numberr));
	printf("Output:%s\n", ft_itoa(numberr));

	char example_mapping_function(unsigned int i, char c)
	{
		return (c + 1);
	}
	char *input_string[] = "hello bye";
	char *output_string = ft_strmapi(input_string, example_mapping_function);
	if (output_string)
	{
		printf("Before strmapi:%s\n", input_string);
		printf("After strmapi:%s\n", output_string);
		free(output_string);
	}
	else
		printf("ERROR");

	return(0);
}
