void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// // ここからは検証用（コメントアウトして提出）
// #include <stdio.h>

// void add_index(unsigned int index, char *c)
// {
//     *c = *c + index;
// }

// int main()
// {
//     char str[] = "hello";
//     ft_striteri(str, &add_index);

//     printf("Modified string: %s\n", str);

//     return 0;
// }