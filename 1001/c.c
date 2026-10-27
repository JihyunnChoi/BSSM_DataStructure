#include <stdio.h>
#define MAX_SIZE 5

int stack[MAX_SIZE];
int top = -1;

int push(int value){
    if (top == MAX_SIZE-1){
        printf("stack overflow");
        return;
    }
    top += 1;
    stack[top] = value;

}

int pop(){
    if (top == -1){
        printf("stack underFlow");
        return;
    }
    int value = stack[top];
    top --;
    return stack[top];
}

int peek(){
    if(top == -1){
        printf("stack is Empty");
        return;
    }
    return stack[top];
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);

    printf("pop : %d\n",pop());

    push(40);

    printf("peek : %d\n",peek());
    printf("pop : %d\n",pop());

    return 0;

    
}