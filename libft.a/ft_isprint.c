int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// // 自作した ft_isprint 関数
// int ft_isprint(int c);

// int main() {
//     // テストケース1: スペース
//     int c1 = ' ';
//     int ret1_ft = ft_isprint(c1);
//     int ret1_std = isprint(c1);
//     printf("Test case 1:\n");
//     printf("ft_isprint: '%c' => %s\n", c1, ret1_ft ? "True" : "False");
//     printf("isprint: '%c' => %s\n", c1, ret1_std ? "True" : "False");
//     printf("Result: %s\n\n", (ret1_ft == ret1_std) ? "Match" : "Mismatch");

//     // テストケース2: 数字 '5'
//     int c2 = '5';
//     int ret2_ft = ft_isprint(c2);
//     int ret2_std = isprint(c2);
//     printf("Test case 2:\n");
//     printf("ft_isprint: '%c' => %s\n", c2, ret2_ft ? "True" : "False");
//     printf("isprint: '%c' => %s\n", c2, ret2_std ? "True" : "False");
//     printf("Result: %s\n\n", (ret2_ft == ret2_std) ? "Match" : "Mismatch");

//     // テストケース3: 制御文字 '\n' (非印字文字)
//     int c3 = '\n';
//     int ret3_ft = ft_isprint(c3);
//     int ret3_std = isprint(c3);
//     printf("Test case 3:\n");
//     printf("ft_isprint: '\\n' => %s\n", ret3_ft ? "True" : "False");
//     printf("isprint: '\\n' => %s\n", ret3_std ? "True" : "False");
//     printf("Result: %s\n\n", (ret3_ft == ret3_std) ? "Match" : "Mismatch");

//     // テストケース4: 非印字文字 '\t' (水平タブ)
//     int c4 = '\t';
//     int ret4_ft = ft_isprint(c4);
//     int ret4_std = isprint(c4);
//     printf("Test case 4:\n");
//     printf("ft_isprint: '\\t' => %s\n", ret4_ft ? "True" : "False");
//     printf("isprint: '\\t' => %s\n", ret4_std ? "True" : "False");
//     printf("Result: %s\n\n", (ret4_ft == ret4_std) ? "Match" : "Mismatch");

//     // テストケース5: 特殊文字 '~' (印字可能な文字)
//     int c5 = '~';
//     int ret5_ft = ft_isprint(c5);
//     int ret5_std = isprint(c5);
//     printf("Test case 5:\n");
//     printf("ft_isprint: '%c' => %s\n", c5, ret5_ft ? "True" : "False");
//     printf("isprint: '%c' => %s\n", c5, ret5_std ? "True" : "False");
//     printf("Result: %s\n\n", (ret5_ft == ret5_std) ? "Match" : "Mismatch");

//     return 0;
// }
