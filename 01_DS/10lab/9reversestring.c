#include<stdio.h>
#define size 10
typedef struct stack
{
    int a[size];
    int top;
}stack_type;

int init(stack_type *v){
    v->top=-1;
}
int overflow(stack_type *s){
    if(s->top==size-1){
        return 1;
    }else{
        return 0;
    }
}
int underflow(stack_type *v){
    if(v->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(stack_type *v,int data){
     v->a[++v->top]=data;
    
}
int pop(stack_type *v){
        int temp=v->a[v->top];
        v->top--;
        return temp;
}
int peek(stack_type *v){
    return v->a[v->top];
}
void display(stack_type *v){
    while(underflow(v)!=1){
        int p=peek(v);
        printf("%d\n",p);
        pop(v);
    }
}

int main(){
    stack_type stack;
      init(&stack);
    char a[20];
    
    int num;
    return 0;
}
