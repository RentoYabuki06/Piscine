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


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ans;

	ans = (char *)malloc(sizeof(char) * len + 1);
	if (!ans)
		return (NULL);
	ft_strlcpy(ans, s + start, len + 1);
	return (ans);
}

