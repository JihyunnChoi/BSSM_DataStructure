#include<stdio.h>
int main(void) {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5 ;
    int index = 2 ;
    int value = 25 ;

    for (int i = 0 ; i < size; i++ ) {
        printf("%d",arr[i])

    }
    printf("실제 인덱스 : ");
    scanf("%d",&index);
}