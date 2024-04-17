#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
    unsigned char *p = s;
    size_t i;

    i = 0;
    while (i < n)
    {
        p[i] = 0;
        i++;
    }
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[20] = "Hello, world!";
//     char str2[20] = "Hello, world!";
//     size_t len = strlen(str1);

//     // テストパターン1: 通常の文字列
//     printf("Test Pattern 1: Normal String\n");
//     printf("Original String: %s\n", str1);
//     bzero(str1, len);
//     printf("bzero Result: %s\n", str1);
//     ft_bzero(str2, len);
//     printf("ft_bzero Result: %s\n\n", str2);

// 	// テストパターン2: 空文字列
// 	printf("Test Pattern 2: Empty String\n");
// 	char empty_str1[1] = "";
// 	char empty_str2[1] = "";
// 	bzero(empty_str1, 1); // サイズ引数を0ではなく1に修正
// 	printf("bzero Result: %s\n", empty_str1);
// 	ft_bzero(empty_str2, 1); // サイズ引数を0ではなく1に修正
// 	printf("ft_bzero Result: %s\n\n", empty_str2);

// 	// テストパターン3: NULLポインタを渡す代わりに適切な値を設定する
// 	printf("Test Pattern 3: NULL String\n");
// 	char null_str1[5] = "12345"; // 適当な値を設定
// 	char null_str2[5] = "12345"; // 適当な値を設定
// 	bzero(null_str1, 5);
// 	printf("bzero Result: %p\n", (void *)null_str1);
// 	ft_bzero(null_str2, 5);
// 	printf("ft_bzero Result: %p\n\n", (void *)null_str2);


//     // テストパターン4: 配列全体をゼロクリア
//     printf("Test Pattern 4: Clear Entire Array\n");
//     int array1[5] = {1, 2, 3, 4, 5};
//     int array2[5] = {1, 2, 3, 4, 5};
//     bzero(array1, sizeof(array1));
//     printf("bzero Result: ");
//     for (int i = 0; i < 5; ++i) {
//         printf("%d ", array1[i]);
//     }
//     printf("\n");
//     ft_bzero(array2, sizeof(array2));
//     printf("ft_bzero Result: ");
//     for (int i = 0; i < 5; ++i) {
//         printf("%d ", array2[i]);
//     }
//     printf("\n\n");

//     // テストパターン5: バッファオーバーフローのチェック
// 	printf("Test Pattern 5: Buffer Overflow Check\n");
// 	char buffer1[5] = "12345";
// 	char buffer2[5] = "12345";
// 	printf("Original Buffer: %s\n", buffer1);
// 	bzero(buffer1, sizeof(buffer1)); // サイズ引数をバッファのサイズに修正
// 	printf("bzero Result: %s\n", buffer1);
// 	ft_bzero(buffer2, sizeof(buffer2)); // サイズ引数をバッファのサイズに修正
// 	printf("ft_bzero Result: %s\n", buffer2);

//     return 0;
// }
