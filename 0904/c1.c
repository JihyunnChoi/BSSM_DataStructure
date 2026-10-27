#include <stdio.h>

int lineaeSearch(int arr[], int size, int t){
    for (int i=0; i<size; i++){
        if(arr[i] == t){
            printf("비교횟수 : %d\n",i-1);
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {13,8,27,33,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int t; 
    printf("입력 : ");
    scanf("%d",&t);

    int re = lineaeSearch(arr,size,t);

    if (re == -1){
        printf("%d 없음\n",t);
    } else{
        printf("%d는 %d번째 인덱스에서 발견\n",t,re);
    }
    return 0;
}