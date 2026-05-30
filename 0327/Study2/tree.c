#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct Tree{
    char data;
    struct Tree *left;
    struct Tree *right;
}Tree;

int main() {
    Tree *A, *B, *C, *D, *E, *F;
    A = (Tree*)malloc(sizeof(Tree));
    B = (Tree*)malloc(sizeof(Tree));
    C = (Tree*)malloc(sizeof(Tree));
    D = (Tree*)malloc(sizeof(Tree));
    E = (Tree*)malloc(sizeof(Tree));
    F = (Tree*)malloc(sizeof(Tree));

    void preorder(Tree *root) {
    if (root > 16) return;

    printf("%c ", root->data);
    preorder(root->left);
    preorder(root->right);
    }

    void inorder(Tree *root) {
        if (root)
    }

}
