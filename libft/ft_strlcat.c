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

size_t	ft_strlcat(char * restrict dest, const char * restrict src, size_t destsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (destsize == 0)
		return (src_len);
	else if (dest_len < destsize)
	{
		while (src[i] != '\0' && dest_len < destsize - 1)
		{
			dest[dest_len] = src[i];
			i++;
			dest_len++;
		}
		dest[dest_len] = '\0';
		return (dest_len + src_len - i);
	}
	else
		return (src_len + destsize);
}

// #include <stdio.h>
// #include <string.h>

// // 自作した ft_strlcat 関数
// size_t ft_strlcat(char *restrict dest, const char *restrict src, size_t destsize);

// int main() {
//     // テストケース1: 空の dest バッファに空の src 文字列を連結する
//     char dest1[20] = "";
//     const char *src1 = "";
//     size_t ret1 = ft_strlcat(dest1, src1, sizeof(dest1));

//     char dest1_std[20] = "";
//     size_t ret1_std = strlcat(dest1_std, src1, sizeof(dest1_std));

//     printf("Test case 1:\n");
//     printf("dest (ft_strlcat): \"%s\", return value: %zu\n", dest1, ret1);
//     printf("dest (strlcat): \"%s\", return value: %zu\n\n", dest1_std, ret1_std);

//     // テストケース2: 空の dest バッファに長い src 文字列を連結する
//     char dest2[10] = "";
//     const char *src2 = "This is a long string";
//     size_t ret2 = ft_strlcat(dest2, src2, sizeof(dest2));

//     char dest2_std[10] = "";
//     size_t ret2_std = strlcat(dest2_std, src2, sizeof(dest2_std));

//     printf("Test case 2:\n");
//     printf("dest (ft_strlcat): \"%s\", return value: %zu\n", dest2, ret2);
//     printf("dest (strlcat): \"%s\", return value: %zu\n\n", dest2_std, ret2_std);

//     // テストケース3: dest バッファが src 文字列よりも大きい場合
//     char dest3[20] = "Short";
//     const char *src3 = "Long string";
//     size_t ret3 = ft_strlcat(dest3, src3, sizeof(dest3));

//     char dest3_std[20] = "Short";
//     size_t ret3_std = strlcat(dest3_std, src3, sizeof(dest3_std));

//     printf("Test case 3:\n");
//     printf("dest (ft_strlcat): \"%s\", return value: %zu\n", dest3, ret3);
//     printf("dest (strlcat): \"%s\", return value: %zu\n\n", dest3_std, ret3_std);

//     // テストケース4: dest バッファが src 文字列と同じサイズの場合
//     char dest4[10] = "Short";
//     const char *src4 = "Long string";
//     size_t ret4 = ft_strlcat(dest4, src4, sizeof(dest4));

//     char dest4_std[10] = "Short";
//     size_t ret4_std = strlcat(dest4_std, src4, sizeof(dest4_std));

//     printf("Test case 4:\n");
//     printf("dest (ft_strlcat): \"%s\", return value: %zu\n", dest4, ret4);
//     printf("dest (strlcat): \"%s\", return value: %zu\n\n", dest4_std, ret4_std);

//     // テストケース5: dest バッファが src 文字列よりも小さい場合
//     char dest5[5] = "Short";
//     const char *src5 = "Long string";
//     size_t ret5 = ft_strlcat(dest5, src5, sizeof(dest5));

//     char dest5_std[5] = "Short";
//     size_t ret5_std = strlcat(dest5_std, src5, sizeof(dest5_std));

//     printf("Test case 5:\n");
//     printf("dest (ft_strlcat): \"%s\", return value: %zu\n", dest5, ret5);
//     printf("dest (strlcat): \"%s\", return value: %zu\n\n", dest5_std, ret5_std);

//     return 0;
// }
