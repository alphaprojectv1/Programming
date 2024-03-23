#include<bits/stdc++.h>
#include <stdio.h>
#define int long long
#define nl "\n"
#define blk " "
#define sep cout<<"-----------"<<nl;
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#else
#define debug(a)
#endif
const int N=1e5+5;
using namespace std;
class Node{
    public:
    int x;
    Node* next;
    Node(int x)
    {
        this->x=x;
        this->next=NULL;
    }
};
void _tail(Node* &head,Node* &tail,int n)
{
    if(head==NULL)
    {
        head=new Node(n);
        tail=head;
        return;
    }
    tail->next=new Node(n);
    tail=tail->next;
}
int sz(Node *head)
{
    int i=0;
    Node *tmp=head;
    while(tmp!=NULL)
    {
        tmp=tmp->next;
        i++;
    }
    return i;
}
void _head(Node* &head,int n)
{
    Node *tmp=new Node(n);
    tmp->next=head;
    head=tmp;
}
void _dhead(Node* &head)
{
    if(sz(head)==0)
    {
        return;
    }
    Node *tmp=head->next,*dn=head;
    delete dn;
    head=tmp;
}
void _print(Node *head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->x<<blk;
        tmp=tmp->next;
    }
    cout<<nl;
}
void _pos(Node* &head,int n,int pos)
{
    if(pos>sz(head))
    {
        return;
    }
    Node* tmp=head;
    for(int i=1;i<pos-1;i++)
    {
        tmp=tmp->next;
    }
    Node* newnode=new Node(n);
    newnode->next=tmp->next;
    tmp->next=newnode;
}
void _pdelete(Node* &head,int pos)
{
    if(sz(head)<=pos)
    {
        return;
    }
    Node *tmp=head;
    for(int i=1;i<pos;i++)
    {
        tmp=tmp->next;
    }
    tmp->next=tmp->next->next;

}
void _tdelete(Node* &head,Node* &tail)
{
    Node* tmp=head;
    while(tmp->next->next!=NULL)
    {
        tmp=tmp->next;
    }
    tail=tmp;
}
int32_t main()
{
    Node *head=NULL,*tail=NULL;
    int q;
    cin>>q;
    while(q--){
        int op;
        cin>>op;
        if(op==0)
        {
            int v;
            cin>>v;
            if(sz(head)==0)
            {
                _tail(head,tail,v);
            }
            else
            {
            _head(head,v);
            }
        }
        else if(op==1)
        {
            int v;
            cin>>v;
            _tail(head,tail,v);
        }
        else if(op==2)
        {
            int v;
            cin>>v;
            if(v== 0 && sz(head)!=1)
            {
                _dhead(head);
            }
            else if(v==0 && sz(head)==1)
            {
                head=NULL;
                tail=NULL;
            }
            else if(sz(head)==v-1)
            {
                _tdelete(head,tail);
            }
            else if(sz(head)<v)
            {
                _pdelete(head,v);
            }
        }
        _print(head);
    }    

}