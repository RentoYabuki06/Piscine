#include "ft_btree.h"

void btree_apply_prefix(t_btree *root, void (*applyf)(void *)) {
    if (root) {
        // ルートのノードに関数を適用
        applyf(root->item);
        // 左のサブツリーに関数を適用
        btree_apply_prefix(root->left, applyf);
        // 右のサブツリーに関数を適用
        btree_apply_prefix(root->right, applyf);
    }
}

#include <stdio.h>
#include <stdlib.h>
#include "ft_btree.h"

// btree_apply_prefix 関数の宣言
void btree_apply_prefix(t_btree *root, void (*applyf)(void *));

// テスト用の関数
void print_item(void *item) {
    printf("%d ", *(int *)item);
}

int main() {
    // テスト用のデータを作成
    t_btree *root = (t_btree *)malloc(sizeof(t_btree));
    root->item = malloc(sizeof(int));
    *(int *)(root->item) = 1;
    
    root->left = (t_btree *)malloc(sizeof(t_btree));
    root->left->item = malloc(sizeof(int));
    *(int *)(root->left->item) = 2;
    root->left->left = NULL;
    root->left->right = NULL;
    
    root->right = (t_btree *)malloc(sizeof(t_btree));
    root->right->item = malloc(sizeof(int));
    *(int *)(root->right->item) = 3;
    root->right->left = NULL;
    root->right->right = NULL;

    // prefix traversalを適用して各ノードのitemを出力
    printf("Applying prefix traversal:\n");
    btree_apply_prefix(root, &print_item);
    printf("\n");

    // メモリの解放
    // free(root->right->item);
    // free(root->right);
    // free(root->left->item);
    // free(root->left);
    // free(root->item);
    // free(root);

    return 0;
}
