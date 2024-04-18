#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	const unsigned char *us;

	us = (const unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (us[i] == c)
		{
			return (void *)(s + i);
		}
		i++;
	}
	return ((void *)0);
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     // テストケース1: 文字が見つかる場合
//     char str1[] = "Hello, world!";
//     char *ptr1_ft = ft_memchr(str1, 'o', strlen(str1));
//     char *ptr1_mem = memchr(str1, 'o', strlen(str1));
//     printf("Case 1 - ft_memchr: %p, memchr: %p, Match: %s\n", ptr1_ft, ptr1_mem, ptr1_ft == ptr1_mem ? "Yes" : "No");

//     // テストケース2: 文字が見つからない場合
//     char str2[] = "Hello, world!";
//     char *ptr2_ft = ft_memchr(str2, 'z', strlen(str2));
//     char *ptr2_mem = memchr(str2, 'z', strlen(str2));
//     printf("Case 2 - ft_memchr: %p, memchr: %p, Match: %s\n", ptr2_ft, ptr2_mem, ptr2_ft == ptr2_mem ? "Yes" : "No");

//     // テストケース3: n が 0 の場合
//     char str3[] = "Hello, world!";
//     char *ptr3_ft = ft_memchr(str3, 'o', 0);
//     char *ptr3_mem = memchr(str3, 'o', 0);
//     printf("Case 3 - ft_memchr: %p, memchr: %p, Match: %s\n", ptr3_ft, ptr3_mem, ptr3_ft == ptr3_mem ? "Yes" : "No");

//     // テストケース4: 文字列が空の場合
//     char str4[] = "";
//     char *ptr4_ft = ft_memchr(str4, 'o', strlen(str4));
//     char *ptr4_mem = memchr(str4, 'o', strlen(str4));
//     printf("Case 4 - ft_memchr: %p, memchr: %p, Match: %s\n", ptr4_ft, ptr4_mem, ptr4_ft == ptr4_mem ? "Yes" : "No");

//     // テストケース5: NULL ポインタを渡した場合
//     char *ptr5_ft = ft_memchr(NULL, 'o', 5);
//     char *ptr5_mem = memchr(NULL, 'o', 5);
//     printf("Case 5 - ft_memchr: %p, memchr: %p, Match: %s\n", ptr5_ft, ptr5_mem, ptr5_ft == ptr5_mem ? "Yes" : "No");

//     return 0;
// }