#include <iostream>
#include <stdlib.h>
using namespace std;
typedef int ElemType;
struct Stack {
    ElemType *stack;
    int top;
    int MaxSize;
};

void InitStack(Stack& S)
{
    S.MaxSize=10;
    S.stack=new ElemType[S.MaxSize];
    if(!S.stack) {
        cerr<<"faild"<<endl;
        exit(1);
    }
    S.top=-1;
}

void Push(Stack& S, ElemType item)
{
    if (S.top==S.MaxSize-1) {
        int k=sizeof(ElemType);
        S.stack=(ElemType*)realloc(S.stack, 2*S.MaxSize*k);
        S.MaxSize=2*S.MaxSize;
    }
    S.top++;
    S.stack[S.top]=item;
}

ElemType Pop(Stack& S)
{
    if (S.top==-1) {
        cerr<<"Stack is empty!"<<endl;
        exit(1);
    }
    S.top--;
    return S.stack[S.top+1];
}

ElemType Peek(Stack& S)
{
    if (S.top==-1) {
        cerr<<"Stack is empty!"<<endl;
        exit(1);
    }
 return S.stack[S.top];
}

bool EmptyStack(Stack& S)
{
    return S.top==-1;
}

void ClearStack(Stack& S)
{
    if (S.stack) {
        delete []S.stack;
        S.stack=0;
    }
    S.top=-1;
    S.MaxSize=0;
}

int main()
{
    Stack s;
    InitStack(s);
    int a[8]={3,8,5,17,9,30,15,22};
    int i;
    for (i=0; i<8; i++) Push(s,a[i]);
    cout<<Pop(s); cout<<' '<<Pop(s)<<endl;
    Push(s,68);
    cout<<Peek(s); cout<<' '<<Pop(s)<<endl;
    while(!EmptyStack(s)) cout<<Pop(s)<<' ';
    cout<<endl;
    ClearStack(s);
}
