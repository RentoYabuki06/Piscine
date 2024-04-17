char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return (char *)(s + i);
		}
		i++;
	}
	if (s[i] == c)
		return (char *)(s + i);
	return ((void *)0);
}

// #include <stdio.h>
// #include <string.h>


// int main() {
//     // テストケース1: 文字が見つかる場合
//     const char *str1_ft = "Hello, World!";
//     int ch1_ft = 'o';
//     char *result1_ft = ft_strchr(str1_ft, ch1_ft);

//     const char *str1_std = "Hello, World!";
//     int ch1_std = 'o';
//     char *result1_std = strchr(str1_std, ch1_std);

//     printf("Case 1 - ft_strchr: %s\n", result1_ft);
//     printf("Case 1 - strchr: %s\n", result1_std);
//     printf("Case 1 - Result: %s\n", result1_ft == result1_std ? "Match" : "Mismatch");

//     // テストケース2: 文字が見つからない場合
//     const char *str2_ft = "Hello, World!";
//     int ch2_ft = 'z';
//     char *result2_ft = ft_strchr(str2_ft, ch2_ft);

//     const char *str2_std = "Hello, World!";
//     int ch2_std = 'z';
//     char *result2_std = strchr(str2_std, ch2_std);

//     printf("Case 2 - ft_strchr: %s\n", result2_ft);
//     printf("Case 2 - strchr: %s\n", result2_std);
//     printf("Case 2 - Result: %s\n", result2_ft == result2_std ? "Match" : "Mismatch");

//     // テストケース3: 空の文字列
//     const char *str3_ft = "";
//     int ch3_ft = 'a';
//     char *result3_ft = ft_strchr(str3_ft, ch3_ft);

//     const char *str3_std = "";
//     int ch3_std = 'a';
//     char *result3_std = strchr(str3_std, ch3_std);

//     printf("Case 3 - ft_strchr: %s\n", result3_ft);
//     printf("Case 3 - strchr: %s\n", result3_std);
//     printf("Case 3 - Result: %s\n", result3_ft == result3_std ? "Match" : "Mismatch");

//     // テストケース4: 文字列の最後の文字を検索
//     const char *str4_ft = "Hello";
//     int ch4_ft = '\0';
//     char *result4_ft = ft_strchr(str4_ft, ch4_ft);

//     const char *str4_std = "Hello";
//     int ch4_std = '\0';
//     char *result4_std = strchr(str4_std, ch4_std);

//     printf("Case 4 - ft_strchr: %s\n", result4_ft);
//     printf("Case 4 - strchr: %s\n", result4_std);
//     printf("Case 4 - Result: %s\n", result4_ft == result4_std ? "Match" : "Mismatch");

//     // テストケース5: NULLポインタを渡す
//     const char *str5_ft = NULL;
//     int ch5_ft = 'a';
//     char *result5_ft = ft_strchr(str5_ft, ch5_ft);

//     const char *str5_std = NULL;
//     int ch5_std = 'a';
//     char *result5_std = strchr(str5_std, ch5_std);

//     printf("Case 5 - ft_strchr: %s\n", result5_ft);
//     printf("Case 5 - strchr: %s\n", result5_std);
//     printf("Case 5 - Result: %s\n", result5_ft == result5_std ? "Match" : "Mismatch");

//     return 0;
// }
