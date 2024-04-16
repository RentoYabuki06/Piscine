#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n) {
    if (src == NULL) // NULLポインタチェック
        return dest;

    unsigned char *pdest = dest;
    const unsigned char *psrc = src;

    // オーバーラップを考慮して、逆順でコピーする
    if (pdest > psrc && pdest < psrc + n) {
        pdest += n - 1;
        psrc += n - 1;
        for (size_t i = 0; i < n; ++i) {
            *(pdest--) = *(psrc--);
        }
    } else {
        for (size_t i = 0; i < n; ++i) {
            *(pdest++) = *(psrc++);
        }
    }

    return dest;
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[20] = "Hello, world!";
//     char str2[20] = "Hello, world!";

//     // テストパターン1: 通常の文字列
//     printf("Test Pattern 1: Normal String\n");
//     printf("Original String: %s\n", str1);
//     memcpy(str1, "Goodbye", 7);
//     printf("memcpy Result: %s\n", str1);
//     ft_memcpy(str2, "Goodbye", 7);
//     printf("ft_memcpy Result: %s\n\n", str2);

//     // テストパターン2: 空文字列
//     printf("Test Pattern 2: Empty String\n");
//     char empty_str1[1] = "";
//     char empty_str2[1] = "";
//     memcpy(empty_str1, "A", 1);
//     printf("memcpy Result: %s\n", empty_str1);
//     ft_memcpy(empty_str2, "A", 1);
//     printf("ft_memcpy Result: %s\n\n", empty_str2);

//     // テストパターン3: NULL文字列
//     printf("Test Pattern 3: NULL String\n");
//     char null_str1[5] = "12345";
//     char null_str2[5] = "12345";
//     memcpy(null_str1, NULL, 5); // NULLポインタを渡す
//     printf("memcpy Result: %s\n", null_str1);
//     ft_memcpy(null_str2, NULL, 5); // NULLポインタを渡す
//     printf("ft_memcpy Result: %s\n\n", null_str2);

//     // テストパターン4: 配列全体をコピー
//     printf("Test Pattern 4: Copy Entire Array\n");
//     int array1[5] = {1, 2, 3, 4, 5};
//     int array2[5] = {1, 2, 3, 4, 5};
//     memcpy(array1, array1, sizeof(array1));
//     printf("memcpy Result: ");
//     for (int i = 0; i < 5; ++i) {
//         printf("%d ", array1[i]);
//     }
//     printf("\n");
//     ft_memcpy(array2, array2, sizeof(array2));
//     printf("ft_memcpy Result: ");
//     for (int i = 0; i < 5; ++i) {
//         printf("%d ", array2[i]);
//     }
//     printf("\n\n");

//     // テストパターン5: バッファオーバーフローのチェック
//     printf("Test Pattern 5: Buffer Overflow Check\n");
//     char buffer1[5] = "12345";
//     char buffer2[5] = "12345";
//     memcpy(buffer1, "12345", 5); // バッファオーバーフローが発生しないように修正
//     printf("memcpy Result: %s\n", buffer1);
//     ft_memcpy(buffer2, "12345", 5); // バッファオーバーフローが発生しないように修正
//     printf("ft_memcpy Result: %s\n", buffer2);

//     return 0;
// }
