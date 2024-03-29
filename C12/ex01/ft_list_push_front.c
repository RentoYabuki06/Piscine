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

void ft_list_push_front(t_list **begin_list, void *data) {
    t_list *new_elem = ft_create_elem(data); // 新しい要素を作成
    if (new_elem) {
        new_elem->next = *begin_list; // 新しい要素のnextポインタをリストの先頭に設定
        *begin_list = new_elem; // リストの先頭を新しい要素に更新
    }
}

#include <stdio.h>

// ft_create_elem 関数の宣言
t_list *ft_create_elem(void *data);

// ft_list_push_front 関数の宣言
void ft_list_push_front(t_list **begin_list, void *data);

// リストの要素を表示する関数
void print_list(t_list *begin_list) {
    printf("List elements: ");
    while (begin_list) {
        printf("%d ", *(int *)(begin_list->data));
        begin_list = begin_list->next;
    }
    printf("\n");
}

int main() {
    // テスト用のリストを初期化
    t_list *list = NULL;

    // データを追加
    int data1 = 1;
    ft_list_push_front(&list, &data1);

    int data2 = 2;
    ft_list_push_front(&list, &data2);

    int data3 = 3;
    ft_list_push_front(&list, &data3);

    // リストの要素を表示
    print_list(list);

    // メモリの解放
    while (list) {
        t_list *temp = list->next;
        free(list);
        list = temp;
    }

    return 0;
}
