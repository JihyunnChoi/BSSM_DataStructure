#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct tree2{
    int data;
    struct tree2 *left;
    struct tree2 *right;
}tree2;

int main (void){
    tree2 *A, *B, *C, *D, *E;
    A = (tree2*)malloc(sizeof(tree2));
    B = (tree2*)malloc(sizeof(tree2));
    C = (tree2*)malloc(sizeof(tree2));
    D = (tree2*)malloc(sizeof(tree2));
    E = (tree2*)malloc(sizeof(tree2));

    A->data=10;
    A->left=B;
    A->right=C;

    B->data=20;
    B->left=D;
    B->right=NULL;

    C->data=15;
    C->left=E;
    C->right=NULL;

    D->data=40;
    D->left=NULL;
    D->right=NULL;

    E->data=35;
    E->left=NULL;
    E->right=NULL;

    printf("A : %d\n",A->data);
    printf("B : %d\n",B->data);
    printf("C : %d\n",C->data);
    printf("D : %d\n",D->data);
    printf("E : %d\n",E->data);

    int newD;

    scanf("%d",&newD);
    printf("A : %d\n",A->data);
    printf("B : %d\n",B->data);
    printf("D : %d\n",newD);
    printf("태양의 검 최종 루트 공결력 합계 : %d\n",((A->data)+(B->data)+(newD)));

    free(A);
    free(B);
    free(C);
    free(D);
    free(E);

    return 0;

}

