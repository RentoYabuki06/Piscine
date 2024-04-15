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

size_t	ft_strlcpy(char *restrict dest, const char *restrict src, size_t destsize)
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

// #include <stdio.h>
// #include <string.h>

// // 自作した ft_strlcpy 関数
// size_t ft_strlcpy(char *restrict dest, const char *restrict src, size_t destsize);

// int main() {
//     // テストケース1: 空の dest バッファに空の src 文字列をコピーする
//     char dest1_ft[20] = "";
//     char dest1_std[20] = "";
//     const char *src1 = "";
//     size_t ret1_ft = ft_strlcpy(dest1_ft, src1, sizeof(dest1_ft));
//     size_t ret1_std = strlcpy(dest1_std, src1, sizeof(dest1_std));
//     printf("Test case 1:\n");
//     printf("ft_strlcpy: dest=\"%s\", ret=%zu\n", dest1_ft, ret1_ft);
//     printf("strlcpy: dest=\"%s\", ret=%zu\n", dest1_std, ret1_std);
//     printf("Result: %s\n\n", (strcmp(dest1_ft, "") == 0 && ret1_ft == ret1_std) ? "Match" : "Mismatch");

//     // テストケース2: 空の dest バッファに長い src 文字列をコピーする
//     char dest2_ft[20] = "";
//     char dest2_std[20] = "";
//     const char *src2 = "This is a long string";
//     size_t ret2_ft = ft_strlcpy(dest2_ft, src2, sizeof(dest2_ft));
//     size_t ret2_std = strlcpy(dest2_std, src2, sizeof(dest2_std));
//     printf("Test case 2:\n");
//     printf("ft_strlcpy: dest=\"%s\", ret=%zu\n", dest2_ft, ret2_ft);
//     printf("strlcpy: dest=\"%s\", ret=%zu\n", dest2_std, ret2_std);
//     printf("Result: %s\n\n", (strcmp(dest2_ft, src2) == 0 && ret2_ft == ret2_std) ? "Match" : "Mismatch");

//     // テストケース3: dest バッファが src 文字列よりも大きい場合
//     char dest3_ft[20] = "Short";
//     char dest3_std[20] = "Short";
//     const char *src3 = "Long string";
//     size_t ret3_ft = ft_strlcpy(dest3_ft, src3, sizeof(dest3_ft));
//     size_t ret3_std = strlcpy(dest3_std, src3, sizeof(dest3_std));
//     printf("Test case 3:\n");
//     printf("ft_strlcpy: dest=\"%s\", ret=%zu\n", dest3_ft, ret3_ft);
//     printf("strlcpy: dest=\"%s\", ret=%zu\n", dest3_std, ret3_std);
//     printf("Result: %s\n\n", (strcmp(dest3_ft, src3) == 0 && ret3_ft == ret3_std) ? "Match" : "Mismatch");

//     // テストケース4: dest バッファが src 文字列と同じサイズの場合
//     char dest4_ft[15] = "Short";
//     char dest4_std[15] = "Short";
//     const char *src4 = "Long string";
//     size_t ret4_ft = ft_strlcpy(dest4_ft, src4, sizeof(dest4_ft));
//     size_t ret4_std = strlcpy(dest4_std, src4, sizeof(dest4_std));
//     printf("Test case 4:\n");
//     printf("ft_strlcpy: dest=\"%s\", ret=%zu\n", dest4_ft, ret4_ft);
//     printf("strlcpy: dest=\"%s\", ret=%zu\n", dest4_std, ret4_std);
//     printf("Result: %s\n\n", (strcmp(dest4_ft, src4) == 0 && ret4_ft == ret4_std) ? "Match" : "Mismatch");

//     // テストケース5: dest バッファが src 文字列よりも小さい場合
//     char dest5_ft[5] = "Short";
//     char dest5_std[5] = "Short";
//     const char *src5 = "Long string";
//     size_t ret5_ft = ft_strlcpy(dest5_ft, src5, sizeof(dest5_ft));
//     size_t ret5_std = strlcpy(dest5_std, src5, sizeof(dest5_std));
//     printf("Test case 5:\n");
//     printf("ft_strlcpy: dest=\"%s\", ret=%zu\n", dest5_ft, ret5_ft);
//     printf("strlcpy: dest=\"%s\", ret=%zu\n", dest5_std, ret5_std);
//     printf("Result: %s\n\n", (strcmp(dest5_ft, "Long") == 0 && ret5_ft == ret5_std) ? "Match" : "Mismatch");

//     return 0;
// }
