#include <stdio.h>

int main(){
    int num[5] = {10,11,12,13,14};
    num[1] = 100;
    for(int i=0; i<5; i++){
        printf("%d\n",num[i]);
    }
}