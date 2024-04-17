int ft_isalnum(int c)
{
	if ((c >= 101 && c <= 132 )|| (c >= 141 && c <= 172) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// // 自作した ft_isalnum 関数
// int ft_isalnum(int c);

// int main() {
//     // テストケース1: 数字文字
//     char c1 = '5';
//     int ret1_ft = ft_isalnum(c1);
//     int ret1_std = isalnum(c1);
//     printf("Test case 1:\n");
//     printf("ft_isalnum: %d\n", ret1_ft);
//     printf("isalnum: %d\n", ret1_std);
//     printf("Result: %s\n\n", (ret1_ft == ret1_std) ? "Match" : "Mismatch");

//     // テストケース2: アルファベット文字
//     char c2 = 'A';
//     int ret2_ft = ft_isalnum(c2);
//     int ret2_std = isalnum(c2);
//     printf("Test case 2:\n");
//     printf("ft_isalnum: %d\n", ret2_ft);
//     printf("isalnum: %d\n", ret2_std);
//     printf("Result: %s\n\n", (ret2_ft == ret2_std) ? "Match" : "Mismatch");

//     // テストケース3: 空白文字
//     char c3 = ' ';
//     int ret3_ft = ft_isalnum(c3);
//     int ret3_std = isalnum(c3);
//     printf("Test case 3:\n");
//     printf("ft_isalnum: %d\n", ret3_ft);
//     printf("isalnum: %d\n", ret3_std);
//     printf("Result: %s\n\n", (ret3_ft == ret3_std) ? "Match" : "Mismatch");

//     // テストケース4: 制御文字
//     char c4 = '\t';
//     int ret4_ft = ft_isalnum(c4);
//     int ret4_std = isalnum(c4);
//     printf("Test case 4:\n");
//     printf("ft_isalnum: %d\n", ret4_ft);
//     printf("isalnum: %d\n", ret4_std);
//     printf("Result: %s\n\n", (ret4_ft == ret4_std) ? "Match" : "Mismatch");

//     // テストケース5: 特殊文字
//     char c5 = '%';
//     int ret5_ft = ft_isalnum(c5);
//     int ret5_std = isalnum(c5);
//     printf("Test case 5:\n");
//     printf("ft_isalnum: %d\n", ret5_ft);
//     printf("isalnum: %d\n", ret5_std);
//     printf("Result: %s\n\n", (ret5_ft == ret5_std) ? "Match" : "Mismatch");

//     return 0;
// }
