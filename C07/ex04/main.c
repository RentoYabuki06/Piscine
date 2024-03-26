int	ft_len(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] == '+' || str[count] == '-' )
			return (-1);
		count++;
	}
	return (count);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}

int	ft_strlen_base(char *str, char *base)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0' && count == i)
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (base[j] == str[i])
			{
				count++;
			}
			j++;
		}
		i++;
	}
	if (i != count)
	{
		return (-1);
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int j;
	int k;
	int ans;
	int tmp;
	int base_len;
	
	ans = 0;
	j = 0;
	base_len = ft_len(base);
	while (str[j])
	{
		k = 0;
		tmp = 0;
		while (base[k])
        {
            if (str[j] == base[k])
			{
				tmp += base_len - k - 1;
				while (k-- > 0)
					tmp *= base_len;
				break;
			}
			k++;
        }
		ans += tmp;
		j++;
	}
	return (ans);
}

int ft_to_decimal(char *nbr, char *base_from)
{
    int i;
    int j;
    int sign;
    char *str;

    sign = 1;
    i = 0;
    while ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == ' ')
        i++;
    while (nbr[i] == '+' || nbr[i] == '-')
    {
        if (nbr[i] == '-')
            sign *= -1;
        i++;
    }
    nbr += i;
    int base_len = ft_len(base_from);
    if (ft_strlen_base(nbr, base_from) < 1)
        return (-1);
    str = (char *)malloc(sizeof(char) * (ft_strlen_base(nbr, base_from) + 1));
    j = -1;
    while (++j < ft_strlen_base(nbr, base_from))
    {
        // 基数文字列から数値への変換
        int base_index = 0;
        while (base_from[base_index] != nbr[j])
        {
            base_index++;
        }
        // 数値に変換した文字をstrに格納
        str[j] = base_index;
    }
    return (sign * ft_atoi_base(str, "0123456789")); // 10進数に変換
}

#include <stdio.h>

int ft_len(char *str);
int ft_strlen_base(char *str, char *base);
int ft_to_decimal(char *nbr, char *base_from);

int main() {
    // 検証用の変数
    char *test_numbers[] = {"0", "-1", "42", "-100", "123456", "-987654"};
    char *base = "0123456789abcdef";

    // 各テストケースについて、ft_to_decimal 関数を呼び出して結果を表示
    for (size_t i = 0; i < sizeof(test_numbers) / sizeof(test_numbers[0]); ++i
