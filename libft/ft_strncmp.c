#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((*s1 != '\0' || *s2 != '\0') && i < n)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// // 自作した ft_strncmp 関数
// int ft_strncmp(const char *s1, const char *s2, size_t n);

// int main() {
//     // テストケース1: 両方の文字列が空の場合
//     const char *s1_1 = "";
//     const char *s2_1 = "";
//     int ret1_ft = ft_strncmp(s1_1, s2_1, 0);
//     int ret1_std = strncmp(s1_1, s2_1, 0);
//     printf("Test case 1:\n");
//     printf("ft_strncmp: ret=%d\n", ret1_ft);
//     printf("strncmp: ret=%d\n", ret1_std);
//     printf("Result: %s\n\n", (ret1_ft == ret1_std) ? "Match" : "Mismatch");

//     // テストケース2: 一部が一致しているが、長さが異なる場合
//     const char *s1_2 = "apple";
//     const char *s2_2 = "applesauce";
//     int ret2_ft = ft_strncmp(s1_2, s2_2, 5);
//     int ret2_std = strncmp(s1_2, s2_2, 5);
//     printf("Test case 2:\n");
//     printf("ft_strncmp: ret=%d\n", ret2_ft);
//     printf("strncmp: ret=%d\n", ret2_std);
//     printf("Result: %s\n\n", (ret2_ft == ret2_std) ? "Match" : "Mismatch");

//     // テストケース3: 一致する文字列
//     const char *s1_3 = "apple";
//     const char *s2_3 = "apple";
//     int ret3_ft = ft_strncmp(s1_3, s2_3, 5);
//     int ret3_std = strncmp(s1_3, s2_3, 5);
//     printf("Test case 3:\n");
//     printf("ft_strncmp: ret=%d\n", ret3_ft);
//     printf("strncmp: ret=%d\n", ret3_std);
//     printf("Result: %s\n\n", (ret3_ft == ret3_std) ? "Match" : "Mismatch");

//     // テストケース4: 異なる文字列
//     const char *s1_4 = "apple";
//     const char *s2_4 = "banana";
//     int ret4_ft = ft_strncmp(s1_4, s2_4, 5);
//     int ret4_std = strncmp(s1_4, s2_4, 5);
//     printf("Test case 4:\n");
//     printf("ft_strncmp: ret=%d\n", ret4_ft);
//     printf("strncmp: ret=%d\n", ret4_std);
//     printf("Result: %s\n\n", (ret4_ft == ret4_std) ? "Match" : "Mismatch");

//     // テストケース5: 長さが 0 の文字列
//     const char *s1_5 = "apple";
//     const char *s2_5 = "banana";
//     int ret5_ft = ft_strncmp(s1_5, s2_5, 0);
//     int ret5_std = strncmp(s1_5, s2_5, 0);
//     printf("Test case 5:\n");
//     printf("ft_strncmp: ret=%d\n", ret5_ft);
//     printf("strncmp: ret=%d\n", ret5_std);
//     printf("Result: %s\n\n", (ret5_ft == ret5_std) ? "Match" : "Mismatch");

//     return 0;
// }
