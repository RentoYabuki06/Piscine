char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	while (i > 0)
	{
		if (s[i] == c)
		{
			return (char *)(s + i);
		}
		i--;
	}
	if (s[i] == c)
		return (char *)(s + i);
	return ((void *)0);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     // テストケース1: 文字列内に指定した文字が複数回現れる場合
//     char str1[] = "hello world";
//     char str1_search_char1 = 'o';
//     char str1_search_char2 = 'o';
//     char *result1_ft = ft_strrchr(str1, str1_search_char1);
//     char *result1_std = strrchr(str1, str1_search_char2);
//     printf("Test Case 1: %s, %s, %s\n", result1_ft, result1_std, result1_ft == result1_std ? "Match" : "Mismatch");

//     // テストケース2: 文字列内に指定した文字が1回だけ現れる場合
//     char str2[] = "hello world";
//     char str2_search_char1 = 'w';
//     char str2_search_char2 = 'w';
//     char *result2_ft = ft_strrchr(str2, str2_search_char1);
//     char *result2_std = strrchr(str2, str2_search_char2);
//     printf("Test Case 2: %s, %s, %s\n", result2_ft, result2_std, result2_ft == result2_std ? "Match" : "Mismatch");

//     // テストケース3: 文字列内に指定した文字が存在しない場合
//     char str3[] = "hello world";
//     char str3_search_char1 = 'z';
//     char str3_search_char2 = 'z';
//     char *result3_ft = ft_strrchr(str3, str3_search_char1);
//     char *result3_std = strrchr(str3, str3_search_char2);
//     printf("Test Case 3: %s, %s, %s\n", result3_ft, result3_std, result3_ft == result3_std ? "Match" : "Mismatch");

//     // テストケース4: 空の文字列を指定する場合
//     char str4[] = "";
//     char str4_search_char1 = 'a';
//     char str4_search_char2 = 'a';
//     char *result4_ft = ft_strrchr(str4, str4_search_char1);
//     char *result4_std = strrchr(str4, str4_search_char2);
//     printf("Test Case 4: %s, %s, %s\n", result4_ft, result4_std, result4_ft == result4_std ? "Match" : "Mismatch");

//     // テストケース5: 検索文字が終端文字である場合
//     char str5[] = "hello world";
//     char str5_search_char1 = '\0';
//     char str5_search_char2 = '\0';
//     char *result5_ft = ft_strrchr(str5, str5_search_char1);
//     char *result5_std = strrchr(str5, str5_search_char2);
//     printf("Test Case 5: %s, %s, %s\n", result5_ft, result5_std, result5_ft == result5_std ? "Match" : "Mismatch");

//     return 0;
// }
