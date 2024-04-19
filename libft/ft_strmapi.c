#include <stdlib.h>
#include <stddef.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// // ここからは検証用（コメントアウトして提出）
// #include <stdio.h>

// char add_one(unsigned int index, char c)
// {
//     return c + index;
// }

// int main()
// {
//     char *str = "hello";
//     char *result = ft_strmapi(str, &add_one);
    
//     if (result != NULL)
//     {
//         printf("Result: %s\n", result);
//         free(result); // メモリの解放
//     }
//     else
//     {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }