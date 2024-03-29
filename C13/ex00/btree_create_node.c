#include <stdlib.h>

// バイナリツリーのノードを表す構造体
typedef struct s_btree {
    void *item;             // ノードが保持するデータ
    struct s_btree *left;   // 左の子ノードへのポインタ
    struct s_btree *right;  // 右の子ノードへのポインタ
} t_btree;


t_btree *btree_create_node(void *item) {
    // 新しいノードのためのメモリを動的に確保
    t_btree *node = (t_btree *)malloc(sizeof(t_btree));
    // メモリ確保が成功したかどうかを確認
    if (node) {
        // 新しいノードのデータを引数で与えられたデータに設定
        node->item = item;
        // 左右の子ノードを初期化
        node->left = NULL;
        node->right = NULL;
    }
    // 新しいノードへのポインタを返す
    return node;
}

#include <stdio.h>

// btree_create_node 関数の宣言
t_btree *btree_create_node(void *item);

int main() {
    // テスト用のデータを作成
    int data = 42;

    // ノードを作成し、データを設定
    t_btree *node = btree_create_node(&data);

    // ノードが正しく作成されたかどうかをチェック
    if (node) {
        printf("New node created.\n");
        printf("Data in the node: %d\n", *(int *)(node->item)); // ポインタを解除してデータを表示
    } else {
        printf("Failed to create new node.\n");
    }

    // メモリの解放（後で行う）
    free(node);

    return 0;
}
