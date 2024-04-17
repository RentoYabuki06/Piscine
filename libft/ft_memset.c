#include <stddef.h>

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *p = b;
    unsigned char uc = c;

    while (len > 0)
	{
        *p++ = uc;
		len--;
    }

    return b;
}

// #include <stddef.h>
// #include <stdio.h>
// #include <string.h>


// int main() {
//     size_t n = 10;

//     // Test case 1: n が 0 の場合
//     n = 0;
//     char str1[10] = {0};
//     char str2[10] = {0};
//     ft_memset(str1, 'B', n);
//     memset(str2, 'B', n);
//     printf("Test case 1:\n");
//     printf("str1: %s\n", str1);
//     printf("str2: %s\n", str2);
//     printf("Result: %s\n\n", memcmp(str1, str2, n) == 0 ? "Match" : "Mismatch");

//     // Test case 2: n が奇数の場合
//     n = 5;
//     char str3[10] = {0};
//     char str4[10] = {0};
//     ft_memset(str3, 'C', n);
//     memset(str4, 'C', n);
//     printf("Test case 2:\n");
//     printf("str3: %s\n", str3);
//     printf("str4: %s\n", str4);
//     printf("Result: %s\n\n", memcmp(str3, str4, n) == 0 ? "Match" : "Mismatch");

//     // Test case 3: n が偶数の場合
//     n = 6;
//     char str5[10] = {0};
//     char str6[10] = {0};
//     ft_memset(str5, 'D', n);
//     memset(str6, 'D', n);
//     printf("Test case 3:\n");
//     printf("str5: %s\n", str5);
//     printf("str6: %s\n", str6);
//     printf("Result: %s\n\n", memcmp(str5, str6, n) == 0 ? "Match" : "Mismatch");

//     return 0;
// }
