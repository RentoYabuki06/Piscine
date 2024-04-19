#include <stddef.h>
#include <stdlib.h>

static size_t	ft_numlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*dest;

	len = 0;
	while (src[len])
		len++;
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_itoa(int n)
{
	char	*ans;
	size_t	len;

	if (n == -2147483648) // 負の最小値の処理
        return ft_strdup("-2147483648");
	len = ft_numlen(n);
	ans = (char *)malloc(sizeof(char) * (len + 1));
	if (!ans)
		return (NULL);
	ans[len] = '\0';
	if (n < 0)
	{
		ans[0] = '-';
		n *= -1;
	}
	while (len > 0)
	{
		len--;
		if (ans[len] == '-')
			break;
		ans[len] = n % 10 + '0';
		n /= 10;
	}
	return (ans);
}

// #include <stdio.h>

// int main()
// {
//     int num = 12345;
//     // int num = 2147483647;
//     // int num = -2147483648;
//     // int num = -21474836;
//     char *result = ft_itoa(num);
//     printf("Result: %s\n", result);
//     return 0;
// }