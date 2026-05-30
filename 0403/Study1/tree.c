#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct Treenode {
    char data;
    struct Treenode *left;
    struct Treenade *right;
} Treenode;
int a = 0;
int count_node(Treenode* root) {
    // 노드가 없으면 0개
    if (root == NULL)
        return 0;

    // 자기 자신(1) + 왼쪽 서브트리 + 오른쪽 서브트리
    return 1 + count_node(root->left) + count_node(root->right);
}

int height(Treenode* root){
    if (root==NULL)
        return 0;
    
        int left_h = height(root->left);
        int right_h = height(root->right);

}