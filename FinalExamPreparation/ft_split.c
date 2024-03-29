#include <stdlib.h>
#include <stdio.h>

int	ft_str_len(char *str)
{
	int	count = 0;
	while(str[count])
	{
		count++;
	}
	return (count);
}

char	*ft_strdup(char *str, char *charset)
{
	int		i = 0;
	int		j = 0;
	char	*ans;

	ans = (char *)malloc(sizeof(char) * (ft_str_len(str) + 1));
	while (str[i])
	{
		j = 0;
		while (j < ft_str_len(charset))
		{
			if (str[i] == charset[j])
			{
				ans[i] = '\0';
				return (ans);
			}
			j++;
		}
		ans[i] = str[i];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}

int	ft_sep_len(char *str, char *charset)
{
	int i = 0;
	int j = 0;
	while (str[i])
	{
		j = 0;
		while (j < ft_str_len(charset))
		{
			if (str[i] == charset[j])
			{
				i++;
				j = -1;
			}
			j++;
		}
		if (j == ft_str_len(charset))
			break ;
	}
	return (i);
}

char **ft_split(char *str, char *charset)
{
	int		next_len = 0;
	char	**ans;

	ans = (char **)malloc(sizeof(char *) * (ft_str_len(str) + 1));
	if (ft_sep_len(str, charset) > 0)
		str += ft_sep_len(str, charset);
	for (int i = 0; *str; i++)
	{
		ans[i] = ft_strdup(str, charset);
		str += ft_str_len(ans[i]);
		next_len = ft_sep_len(str, charset);
		str += next_len;
	}
	return (ans);
}

int	main()
{
	char	*str = "abcuysxcvgaslavubnmpcaoisafidvwa";
	char	*charset = "abc";
	char	**ans;

	ans = ft_split(str, charset);

	for (int i = 0; ans[i] != 0; i++)
	{
		printf("[%s]\n", ans[i]);
	}
}