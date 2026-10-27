#include <stdio.h>
#include <string.h>

char stack[1000];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    return stack[top--];
}

int main() {
    char str[1000];

    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            push(str[i]);
        }
        else if (str[i] == ')' || str[i] == ']' || str[i] == '}') {
            if (top == -1) {
                printf("NO");
                return 0;
            }

            char c = pop();

            if ((str[i] == ')' && c != '(') ||
                (str[i] == ']' && c != '[') ||
                (str[i] == '}' && c != '{')) {
                printf("NO");
                return 0;
            }
        }
    }

    if (top == -1)
        printf("YES");
    else
        printf("NO");

    return 0;
}