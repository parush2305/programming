if(pos1==pos2)
        return head;
    if(abs(pos1-pos2)==1 && (pos1==0 ||pos2==0))
    {
        node*n1=head;
        node*n2=n1->next;
        node*c1=n2->next;
        n2->next=n1;
        n1->next=c1;
        head=n2;
        return head;
    }
    if(pos1==0|| pos2==0)
    {
        node*n1=head;
        node*p1=n1->next;
        node*pn2=NULL;
        node*n2=head;
        int x=0;
        while(x<=pos2 && n2!=NULL)
        {
            pn2=n2;
            n2=n2->next;
        }
        if(n2==NULL)
            return head ;
        pn2->next=n1;
        n1->next=n2->next;
        n2->next=p1;
        head=n2;
        return head;
    }
    if(abs(pos1-pos2)==1)
    {
        int x=0;
        node*pn1=NULL;
        node*n1=head;
        while(x<=pos1 && n1!=NULL)
        {
            pn1=n1;
            n1=n1->next;
        }
        if(n1==NULL)
            return head;
        node*n2=n1->next;
        pn1->next=n2;
        n1->next=n2->next;
        n2->next=n1;
        return head;
    }
    else{
        int x=0,y=0;
        node*pn1=NULL,*pn2=NULL;
        node*n1=head,*n2=head;
        while(x<=pos1 && n1!=NULL)
        {
            pn1=n1;
            n1=n1->next;
        }
        node *nn1=n1->next;
        while(y<=pos2 && n2!=NULL)
        {
            pn2=n2;
            n2=n2->next;
        }
        if(n1==NULL || n2==NULL)
        return head;
        pn1->next=n2;
        pn2->next=n1;
        n1->next=n2->next;
        n2->next=nn1;
        return head;

    }
