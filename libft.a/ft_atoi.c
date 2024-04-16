int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	ans;

	i = 0;
	ans = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
    if (str[i] == '-')
    {
        sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ans *= 10;
		ans += str[i] - '0';
		i++;
	}
	return ((int)ans * sign);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 自作した ft_atoi 関数
int ft_atoi(const char *str);

int main() {
    // テストケース1: 正の整数
    const char *str1 = "12345";
    int ret1_ft = ft_atoi(str1);
    int ret1_std = atoi(str1);
    printf("Test case 1:\n");
    printf("ft_atoi: %d\n", ret1_ft);
    printf("atoi: %d\n", ret1_std);
    printf("Result: %s\n\n", (ret1_ft == ret1_std) ? "Match" : "Mismatch");

    // テストケース2: 負の整数
    const char *str2 = "-54321";
    int ret2_ft = ft_atoi(str2);
    int ret2_std = atoi(str2);
    printf("Test case 2:\n");
    printf("ft_atoi: %d\n", ret2_ft);
    printf("atoi: %d\n", ret2_std);
    printf("Result: %s\n\n", (ret2_ft == ret2_std) ? "Match" : "Mismatch");

    // テストケース3: 先頭にスペースがある場合
    const char *str3 = "   789";
    int ret3_ft = ft_atoi(str3);
    int ret3_std = atoi(str3);
    printf("Test case 3:\n");
    printf("ft_atoi: %d\n", ret3_ft);
    printf("atoi: %d\n", ret3_std);
    printf("Result: %s\n\n", (ret3_ft == ret3_std) ? "Match" : "Mismatch");

    // テストケース4: 数字以外の文字が含まれる場合
    const char *str4 = "12abc34";
    int ret4_ft = ft_atoi(str4);
    int ret4_std = atoi(str4);
    printf("Test case 4:\n");
    printf("ft_atoi: %d\n", ret4_ft);
    printf("atoi: %d\n", ret4_std);
    printf("Result: %s\n\n", (ret4_ft == ret4_std) ? "Match" : "Mismatch");

    // テストケース5: 文字列が空の場合
    const char *str5 = "";
    int ret5_ft = ft_atoi(str5);
    int ret5_std = atoi(str5);
    printf("Test case 5:\n");
    printf("ft_atoi: %d\n", ret5_ft);
    printf("atoi: %d\n", ret5_std);
    printf("Result: %s\n\n", (ret5_ft == ret5_std) ? "Match" : "Mismatch");

    return 0;
}

