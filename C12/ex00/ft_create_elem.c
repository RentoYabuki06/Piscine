#include "ft_list.h"
#include <stdlib.h>

t_list *ft_create_elem(void *data) {
    t_list *new_elem = (t_list *)malloc(sizeof(t_list));
    if (new_elem) {
        new_elem->data = data;
        new_elem->next = NULL;
    }
    return new_elem;
}

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

// ft_create_elem 関数の宣言
t_list *ft_create_elem(void *data);

int main() {
    // テスト用のデータを作成
    int *data = (int *)malloc(sizeof(int));
    *data = 42;

    // 新しい要素を作成
    t_list *new_elem = ft_create_elem(data);

    // 新しい要素のデータを表示
    if (new_elem) {
        printf("New element created.\n");
        printf("Data in the element: %d\n", *(int *)(new_elem->data));
    } else {
        printf("Failed to create new element.\n");
    }

    // メモリの解放
    free(data);
    free(new_elem);

    return 0;
}
