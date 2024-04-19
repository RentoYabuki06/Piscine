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
static size_t	ft_strlcpy(char *restrict dest, const char *restrict src, size_t destsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (destsize == 0)
		return (src_len);
	while (i < destsize - 1 && *src != '\0')
	{
		*dest = *src;
		dest ++;
		src ++;
		i++;
	}
	*dest = '\0';
	return (src_len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ans;
	size_t	len_s1;
	size_t	len_s2;
	
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ans = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!ans)
		return (NULL);
	ft_strlcpy(ans, s1, len_s1 + 1);
	ft_strlcpy(ans + len_s1, s2, len_s2 + 1);
	return (ans);
}
