#include<bits/stdc++.h>
#include <stdio.h>
#define int long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#else
#define debug(a)
#endif
const int N=1e5+5;
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
int sz(Node *head)
{
    int i=0;
    Node* tmp=head;
    while(tmp!=NULL)
    {
        i++;
        tmp=tmp->next;
    }
    return i;
}
void tail(Node* &head,int n)
{
    Node* tmp=head;
    if(head==NULL)
    {
        head=new Node(n);
        return;
    }
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=new Node(n);
}
int32_t main()
{
    Node* head=NULL;
    // head->next=new Node(2);
    // head->next=new Node(3);
    // head->next=new Node(4);
    // head->next=new Node(5);
    // head->next=new Node(6);
    // head->next=new Node(7);
    cout<<sz(head)<<nl;
    for(int i=1;i<6;i++)
    {
        if(i>=(6/2)){
        tail(head,i);}
    }
    cout<<sz(head)<<nl;
}