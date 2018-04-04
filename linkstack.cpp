void InitStack(SNode*& HS)
{
    HS=NULL;
}

void Push(SNode*& HS, const ElemType& item)
{
    SNode* newptr=new SNode;
    newptr->data=item;
    newptr->next=HS;
    HS=newptr;
}

ElemType Pop(SNode*& HS)
{
    if (HS==NULL) {
        cerr<<"Linked stack is empty!"<<endl;
        exit(1);
    }

    SNode* p=HS;
    HS=HS->next;

    ElemType temp=p->data;
    delete p;
    return temp;
}

ElemType Peek(SNode* HS)
{
    if (HS==NULL) {
        cerr<<"Linked stack is empty!"<<endl;
        exit(1);
    }

    return HS->data;
}

bool EmptyStack(SNode* HS)
{
    return HS==NULL;
}

void ClearStack(SNode*& HS)
{
    SNode *cp, *np;
    cp=HS;
    while (cp!=NULL)
    {
        np=cp->next;
        delete cp;
        cp=np;
    }
    HS=NULL;
}
