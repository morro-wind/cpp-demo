#include <iostream>
#include <cstdlib>
using namespace std;

typedef int ElemType;
struct SNode {
    ElemType data;
    SNode* next;
};

#include "linkstack.cpp"

int main(void)
{
    SNode* a;
    InitStack(a);
    int x;
    cin>>x;
    while(x!=-1) {
        Push(a,x);
        cin>>x;
    }

    while (!EmptyStack(a))
        cout<<Pop(a)<<" ";
    cout<<endl;
    ClearStack(a);
}
