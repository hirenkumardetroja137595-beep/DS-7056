#include<stdio.h>
#include<conio.h>

char stack [MAX];
int top =-1;

void push(char ch){
    if (top<MAX -1)
    stack [++top]=ch;
}
char pop(){
    if (top>=0)
        return stack[top--];
    return'\0';
}
int main(){
    char str[MAX];
}
