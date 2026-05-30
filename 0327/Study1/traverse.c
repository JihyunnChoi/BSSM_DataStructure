#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct TreeNode{
    char data;
    struct TreeNode *left;
    struct TreeNode *right;
}TreeNode;


int main(){
    TreeNode *A,*B,*C,*D,*E;
    A = (TreeNode*)malloc(sizeof(TreeNode));
    B = (TreeNode*)malloc(sizeof(TreeNode));
    C = (TreeNode*)malloc(sizeof(TreeNode));
    D = (TreeNode*)malloc(sizeof(TreeNode));
    E = (TreeNode*)malloc(sizeof(TreeNode));

    void inorder(TreeNode *root) {
    if (root == NULL) return;

    inorder(root->left);
    printf("%c ", root->data);
    inorder(root->right);
    }

    A -> data = 'A';
    B -> data = 'B';
    C -> data = 'C';
    D -> data = 'D';
    E -> data = 'E';

    printf("A : %d\n",A->data);
    printf("B : %d\n",B->data);
    printf("C : %d\n",C->data);
    printf("D : %d\n",D->data);
    printf("E : %d\n",E->data);
    free(A);
    free(B);
    free(C);
    free(D);
    free(E);


}